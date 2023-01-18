
#include "ChnsEventShape.h"

#include "RhoCandidate.h"
#include "ChnsPidCandidate.h"
#include "RhoCandList.h"
#include "TMatrixD.h"
#include "TMatrixDEigen.h"

#include <algorithm>

ChnsEventShape::ChnsEventShape(RhoCandList &l, TLorentzVector cms, double neutMinE, double chrgMinP) : 
  fnChrg(0), fnNeut(0), fN(0), fpmaxlab(0.), fpmaxcms(0.),fpminlab(0.), fpmincms(0.), fptmax(0.), fptmin(0.),
  fprapmax(0.), femaxneutlab(0.), femaxneutcms(0.), fpmaxchlab(0.), fpmaxchcms(0.), fdetemcsum(0.), fdetemcmax(0.),
  fptsumlab(0.),fneutetsumlab(0.),fneutesumlab(0.),fchrgptsumlab(0.),fchrgpsumlab(0.),
  fptsumcms(0.),fneutetsumcms(0.),fneutesumcms(0.),fchrgptsumcms(0.),fchrgpsumcms(0.),
  fsph(-1.), fapl(-1.), fpla(-1.), fcir(-1.), fFWready(false), fthr(-1.)
{
  int i;

  // initialize more complex things
  fThrVect.SetXYZ(0.,0.,0.);
  fBoost=cms.BoostVector();  
  for (i=0;i<=FWMAX;++i) fFWmom[i]=0.;
  
  
  double pmax=0., ptmax=0., pmaxcms=0.;
  double pmin=1000., ptmin=1000., pmincms=1000.;
  double prapmax=0.;
  double pmaxch=0., pmaxchcms=0., emaxneut=0., emaxneutcms=0.;
  double emcmax=0., emcsum=0.;
  
  
  fLabList.clear();
  fCmsList.clear();
  
  fCharge.clear();
  fElProb.clear();
  fMuProb.clear();
  fPiProb.clear();
  fKaProb.clear();
  fPrProb.clear();
  
  for (i=0;i<l.GetLength();++i)
  {
	TLorentzVector lv(l[i]->P4());
	int chrg(l[i]->Charge());
	
	// check thresholds for neutral and charged particles
	if ( (chrg==0 && lv.E()<neutMinE) || (chrg!=0 && lv.P()<chrgMinP) ) continue; 

	ChnsPidCandidate *mic = (ChnsPidCandidate*)l[i]->GetRecoCandidate();
	
	fN++;
	
	// cache multiplicities
	if (chrg==0) fnNeut++;
	else fnChrg++;
	
	// cache unboosted 4-vectors
	fLabList.push_back(lv);
	// cache charges
	fCharge.push_back(chrg);
	// cache PID probabilities
	fElProb.push_back(l[i]->GetPidInfo(0));
	fMuProb.push_back(l[i]->GetPidInfo(1));
	fPiProb.push_back(l[i]->GetPidInfo(2));
	fKaProb.push_back(l[i]->GetPidInfo(3));
	fPrProb.push_back(l[i]->GetPidInfo(4));
	
	// sum momentum variables (lab)
	fptsumlab += lv.Pt();
	if (chrg==0)
	{
	  fneutetsumlab += lv.Pt();  
	  fneutesumlab	+= lv.E();
	  if (lv.E()>emaxneut) emaxneut = lv.E();
	}
	else
	{
	  fchrgptsumlab	+= lv.Pt();
	  fchrgpsumlab	+= lv.P();
	  if (lv.P()>pmaxch) pmaxch = lv.P();
	}
	
	// cache maximum momenta in lab
	if (lv.P()>pmax) pmax=lv.P();
	if (lv.Pt()>ptmax) ptmax=lv.Pt();
	
	// cache minimum momenta in lab
	if (lv.P()<pmin) pmin=lv.P();
	if (lv.Pt()<ptmin) ptmin=lv.Pt();
	
	// cache pseudorapidity
	if (lv.PseudoRapidity()>prapmax) prapmax = lv.PseudoRapidity();
	
	// cache boosted vectors
	lv.Boost(-fBoost);
	fCmsList.push_back(lv);

	// sum momentum variables (cms)
	fptsumcms += lv.Pt();
	if (chrg==0)
	{
	  fneutetsumcms += lv.Pt();  
	  fneutesumcms	+= lv.E();
	  if (lv.E()>emaxneutcms) emaxneutcms = lv.E();
	}
	else
	{
	  fchrgptsumcms	+= lv.Pt();
	  fchrgpsumcms	+= lv.P();
	  if (lv.P()>pmaxchcms) pmaxchcms = lv.P();
	}
	
	// cache maximum momenta in cms
	if (lv.P()>pmaxcms) pmaxcms=lv.P();
	// cache minimum momenta in cms
	if (lv.P()<pmincms) pmincms=lv.P();
	
	// detector specific things
	if (mic)
	{
		emcsum += mic->GetEmcCalEnergy();
		if (mic->GetEmcCalEnergy()>emcmax) emcmax=mic->GetEmcCalEnergy();
	}
  }
  
  fpmaxlab      = pmax;
  fptmax        = ptmax;
  fpmaxcms      = pmaxcms;
  fpminlab      = pmin;
  fptmin        = ptmin;
  fpmincms      = pmincms;
  fprapmax      = prapmax;
  femaxneutlab  = emaxneut;		
  femaxneutcms  = emaxneutcms;		
  fpmaxchlab    = pmaxch;			
  fpmaxchcms    = pmaxchcms;		
  fdetemcmax    = emcmax;
  fdetemcsum    = emcsum;
}

// ----------------------------

void ChnsEventShape::ComputeSphericity()
{
  if( fN==0 ) return;
  
  double stot=0, sxx=0, sxy=0, sxz=0, syy=0, syz=0, szz=0;	
  int i;
  
  for (i=0;i<fN;++i)
  {
	TVector3 v(fCmsList[i].Vect());
	
	sxx += v.X()*v.X(); sxy += v.X()*v.Y(); sxz += v.X()*v.Z();
	syy += v.Y()*v.Y(); syz += v.Y()*v.Z();
	szz += v.Z()*v.Z();
	
	stot += v.Mag2();
  }
  
  TMatrixD sm(3,3);
  sm(0,0) = sxx/stot; sm(0,1) = sxy/stot; sm(0,2) = sxz/stot; 
  sm(1,0) = sxy/stot; sm(1,1) = syy/stot; sm(1,2) = syz/stot; 
  sm(2,0) = sxz/stot; sm(2,1) = syz/stot; sm(2,2) = szz/stot; 
  
  TMatrixDEigen ei(sm);
  TMatrixD eiv=ei.GetEigenValues();
  
  fsph = 1.5 * (eiv(1,1) + eiv(2,2));		// 3/2 (lam_2+lam_3)
  fapl = 1.5 * eiv(2,2); 					// 3/2 lam_3
  fpla = eiv(1,1) - eiv(2,2);  				// lam_2-lam_3
  fcir = 2.*std::min(eiv(1,1),eiv(0,0))/(eiv(1,1)+eiv(0,0));	// 2* min(lam_1, lam_2)/(lam_1+lam_2)
}

// ---------------------------------

double ChnsEventShape::Sphericity()
{
  if (fsph<0.) ComputeSphericity();
  
  return fsph;
}

// ---------------------------------

double ChnsEventShape::Planarity()
{
  if (fpla<0.) ComputeSphericity();
  
  return fpla;
}

// ---------------------------------

double ChnsEventShape::Aplanarity()
{
  if (fapl<0.) ComputeSphericity();
  
  return fapl;
}

// ---------------------------------

double ChnsEventShape::Circularity()
{
  if (fcir<0.) ComputeSphericity();
  
  return fcir;
}

// ---------------------------------------
// use iterative formula for thrust vector
//
//             sum eps( n(j)*p_i) * p_i
//   n(j+1) = --------------------------
//            |        ''             | 
//
// with eps(x)=-1 for x<0 and =+1 for x>0
//
// KG 03/2017:
//   extended for multiple start vectors to 
//   avoid getting stuck in local minimum
//
// ref: http://home.fnal.gov/~mrenna/lutp0613man2/node235.html
//

double ChnsEventShape::Thrust(int Nmax)
{
  // did we already compute?
  if (fthr>-1.) return fthr; 
  
  // no particles  ->  return thr = -1 
  if( fN==0 ) return -1.;
  
  size_t i,j,k;

  // copy vector components of 4-vectors to TVector3 list
  std::vector<TVector3> MomList;
  for (i=0;i<fCmsList.size();++i) MomList.push_back(fCmsList[i].Vect());
  
  // sort wrt momentum magnitudes to initialize the start vectors
  std::sort(MomList.begin(), MomList.end(), CmpTVect3Mag);
  
  // select highest momentum
  TVector3 n0 = MomList[0];
  //double pmax = n0.Mag(); //  //[R.K.03/2017] unused variable(s)
  
  // prepare vector container for all 2^(Nmax-1) start vectors
  // based on the Nmax highest momentum vectors.
  // this is to avoid getting stuck in local maximum
  std::vector<TVector3>  startn0;
  size_t n = std::min(Nmax, fN), nst = pow(2,n-1);
  
  // construct 2^(Nmax-1) start vectors 
  // n_i = Sum [eps_i * p_i], with eps_i = +-1
  for (i=0; i<nst; ++i)
  {
  	TVector3 newst = n0;
	
	// the expression (i>>j) & 1)*2-1 turns bit at j-th position in integer i
	// like: 0 -> -1 and 1 -> 1 
	// in the bit string coding the eps_i settings
	// e.g. i = 5 = 0101 --> eps_i = {-1,1,-1,1}
	
    for (j=0;j<n-1;++j) newst += (( (i>>j) & 1)*2-1 ) * MomList[j+1];
		
	startn0.push_back(newst.Unit());
  }  

  // compute maximum thrust for all start vectors    
  for (k=0; k<startn0.size(); ++k)
  {
  	n0 = startn0[k];
	TVector3 nnew(0,0,0);
	
	// find thrust axis (5 iterations)
	for (i=0;i<5;++i)
	{
	  // compute current thrust axis for next iteration
	  for (j=0;(int)j<fN;++j) nnew += Eps(n0, MomList[j]) * MomList[j];
	  
	  // normalize
	  n0 = nnew.Unit();
	}

    // compute current thrust value
	double thisthr=0, sum=0;
		
	for (i=0;(int)i<fN;++i)
	{
	  thisthr += fabs(n0.Dot(MomList[i]));
	  sum     += MomList[i].Mag();
	}
	
	// maximum thrust for starting vector k
	thisthr /= sum;
	
	if (fthr<thisthr)
	{
	  fthr     = thisthr;
	  fThrVect = n0;
	}
  }
  
  return fthr;

  /*  
  int i,j;
  double pmax=0;
  
  //find starting vector as maximum momentum vector
  for (i=0;i<fN;++i)
  {
	if (fCmsList[i].Vect().Mag()>pmax)
	{
	  n0=fCmsList[i].Vect();
	  pmax=fCmsList[i].Vect().Mag();
	}
  }
  
  TVector3 nnew(0,0,0);

  // find thrust axis (10 iterations)
  for (i=0;i<10;++i)
  {
	for (j=0;j<fN;++j) 
	  nnew += Eps(n0,fCmsList[j].Vect()) * fCmsList[j].Vect();
	
	n0=nnew.Unit();
  }
  
  fThrVect = n0;
  
  double thr=0, sum=0;
  for (i=0;i<fN;++i)
  {
	thr += fabs(fThrVect.Dot(fCmsList[i].Vect()));
	sum += fCmsList[i].Vect().Mag();
  }
  
  fthr = thr/sum;
  
  return fthr;
  */
}

// ---------------------------------------

TVector3 ChnsEventShape::ThrustVector()
{
  if (fthr<0.) Thrust();
  
  return fThrVect;
}

// ---------------------------------------

double ChnsEventShape::Legendre( int l, double x )
{
    if (fabs(x)>1.) return -999.;

	if (l==0) return 1.;
	
    double pmm = 1.;
	double pmmp1 = x;

	if (l>1)
	{
		for(int ll=2; ll<=l; ll++)
		{
		  double pll = (x * (2 * ll - 1) * pmmp1 - (ll - 1) * pmm) / (ll);
		  pmm = pmmp1;
		  pmmp1 = pll;
		}
	}
   return pmmp1;
}

// ---------------------------------------

double ChnsEventShape::FoxWolfMomH(int order)
{
  if (order>FWMAX) return -1.;
 
  // already computed FW moments
  if (fFWready) return fFWmom[order];
  
  if( fN==0 ) return -1.;

  double s = 0.;
  int i,j,l;

  for (i=0; i<fN-1; ++i)
  {
     // this candidate's 3-momentum
	  TVector3 p1(fCmsList[i].Vect());
      double pmag1 = p1.Mag();

      // loop over other candidates, starting at the next one in the list
 	  
	  for (j=i+1; j<fN; ++j)
	  {
		// this candidate's 3-momentum
		TVector3 p2(fCmsList[j].Vect());
		double pmag2 = p2.Mag();

		// the cosine of the angle between the two candidates
		double cosPhi =  cos ( p1.Angle(p2) );

		// the contribution of this pair of track 
		// (note the factor 2 : the pair enters the sum twice)
		for( l=0; l<=FWMAX; l++ )
		  fFWmom[l] += 2 * pmag1 * pmag2 * Legendre( l, cosPhi );
		  
	  }
      // contribution of this track
      for( l=0; l<=FWMAX; l++ )
		fFWmom[l] += pmag1 * pmag1 * Legendre( l, 1. );
      
      // total energy
      s += fCmsList[i].Energy();
   }
  
  // well ...
  if( s<=0. ) return -1.;
  double s2=s*s;
  
  // normalize Fox Wolfram Moments
  for( i=0; i<=FWMAX; i++) fFWmom[i]/=s2 ;  
  
  fFWready = true;
  
  return fFWmom[order];
}


// ---------------------------------------

double ChnsEventShape::FoxWolfMomR(int order)
{
  return FoxWolfMomH(order)/FoxWolfMomH(0);
}

// ---------------------------------------
// ---------------------------------------
// ---------------------------------------

int ChnsEventShape::MultPminLab(double pmin)
{
  int cnt=0;
  for (int i=0;i<fN;++i) 
	if (fLabList[i].P()>pmin) cnt++;
 
  return cnt;
}

// ---------------------------------------

int ChnsEventShape::MultPmaxLab(double pmax)
{
  int cnt=0;
  for (int i=0;i<fN;++i) 
	if (fLabList[i].P()<pmax) cnt++;
 
  return cnt;
}

// ---------------------------------------

int ChnsEventShape::MultPminCms(double pmin)
{
  int cnt=0;
  for (int i=0;i<fN;++i) 
	if (fCmsList[i].P()>pmin) cnt++;
 
  return cnt;
}

// ---------------------------------------

int ChnsEventShape::MultPmaxCms(double pmax)
{
  int cnt=0;
  for (int i=0;i<fN;++i) 
	if (fCmsList[i].P()<pmax) cnt++;
 
  return cnt;
}
// ---------------------------------------
// ---------------------------------------
// ---------------------------------------

int ChnsEventShape::MultPtminLab(double ptmin)
{
  int cnt=0;
  for (int i=0;i<fN;++i) 
	if (fLabList[i].Pt()>ptmin) cnt++;
 
  return cnt;
}

// ---------------------------------------

int ChnsEventShape::MultPtmaxLab(double ptmax)
{
  int cnt=0;
  for (int i=0;i<fN;++i) 
	if (fLabList[i].Pt()<ptmax) cnt++;
 
  return cnt;
}

// ---------------------------------------

int ChnsEventShape::MultPtminCms(double ptmin)
{
  int cnt=0;
  for (int i=0;i<fN;++i) 
	if (fCmsList[i].Pt()>ptmin) cnt++;
 
  return cnt;
}

// ---------------------------------------

int ChnsEventShape::MultPtmaxCms(double ptmax)
{
  int cnt=0;
  for (int i=0;i<fN;++i) 
	if (fCmsList[i].Pt()<ptmax) cnt++;
 
  return cnt;
}
// ---------------------------------------
// ---------------------------------------
// ---------------------------------------

int ChnsEventShape::MultElectronPminLab(double prob, double pmin)
{
  int cnt=0;
  for (int i=0;i<fN;++i) 
	if (fLabList[i].Pt()>pmin && fCharge[i]!=0 && fElProb[i]>prob) cnt++;
 
  return cnt;
}

// ---------------------------------------

int ChnsEventShape::MultMuonPminLab(double prob, double pmin)
{
  int cnt=0;
  for (int i=0;i<fN;++i) 
	if (fLabList[i].Pt()>pmin && fCharge[i]!=0 && fMuProb[i]>prob) cnt++;
 
  return cnt;
}

// ---------------------------------------

int ChnsEventShape::MultPionPminLab(double prob, double pmin)
{
  int cnt=0;
  for (int i=0;i<fN;++i) 
	if (fLabList[i].Pt()>pmin && fCharge[i]!=0 && fPiProb[i]>prob) cnt++;
 
  return cnt;
}

// ---------------------------------------

int ChnsEventShape::MultKaonPminLab(double prob, double pmin)
{
  int cnt=0;
  for (int i=0;i<fN;++i) 
	if (fLabList[i].Pt()>pmin && fCharge[i]!=0 && fKaProb[i]>prob) cnt++;
 
  return cnt;
}

// ---------------------------------------

int ChnsEventShape::MultProtonPminLab(double prob, double pmin)
{
  int cnt=0;
  for (int i=0;i<fN;++i) 
	if (fLabList[i].Pt()>pmin && fCharge[i]!=0 && fPrProb[i]>prob) cnt++;
 
  return cnt;
}

// ---------------------------------------
// ---------------------------------------
	
int ChnsEventShape::MultElectronPminCms(double prob, double pmin)
{
  int cnt=0;
  for (int i=0;i<fN;++i) 
	if (fCmsList[i].Pt()>pmin && fCharge[i]!=0 && fElProb[i]>prob) cnt++;
 
  return cnt;
}

// ---------------------------------------

int ChnsEventShape::MultMuonPminCms(double prob, double pmin)
{
  int cnt=0;
  for (int i=0;i<fN;++i) 
	if (fCmsList[i].Pt()>pmin && fCharge[i]!=0 && fMuProb[i]>prob) cnt++;
 
  return cnt;
}

// ---------------------------------------

int ChnsEventShape::MultPionPminCms(double prob, double pmin)
{
  int cnt=0;
  for (int i=0;i<fN;++i) 
	if (fCmsList[i].Pt()>pmin && fCharge[i]!=0 && fPiProb[i]>prob) cnt++;
 
  return cnt;
}

// ---------------------------------------

int ChnsEventShape::MultKaonPminCms(double prob, double pmin)
{
  int cnt=0;
  for (int i=0;i<fN;++i) 
	if (fCmsList[i].Pt()>pmin && fCharge[i]!=0 && fKaProb[i]>prob) cnt++;
 
  return cnt;
}

// ---------------------------------------

int ChnsEventShape::MultProtonPminCms(double prob, double pmin)
{
  int cnt=0;
  for (int i=0;i<fN;++i) 
	if (fCmsList[i].Pt()>pmin && fCharge[i]!=0 && fPrProb[i]>prob) cnt++;
 
  return cnt;
}

// ---------------------------------------
// ---------------------------------------
// ---------------------------------------

int ChnsEventShape::MultNeutEminLab(double emin)
{
  int cnt=0;
  for (int i=0;i<fN;++i) 
	if (fCharge[i]==0 && fLabList[i].E()>emin) cnt++;
 
  return cnt;
}

// ---------------------------------------

int ChnsEventShape::MultNeutEmaxLab(double emax)
{
  int cnt=0;
  for (int i=0;i<fN;++i) 
	if (fCharge[i]==0 && fLabList[i].E()<emax) cnt++;
 
  return cnt;
}

// ---------------------------------------

int ChnsEventShape::MultNeutEminCms(double emin)
{
  int cnt=0;
  for (int i=0;i<fN;++i) 
	if (fCharge[i]==0 && fCmsList[i].E()>emin) cnt++;
 
  return cnt;
}

// ---------------------------------------

int ChnsEventShape::MultNeutEmaxCms(double emax)
{
  int cnt=0;
  for (int i=0;i<fN;++i) 
	if (fCharge[i]==0 && fCmsList[i].E()<emax) cnt++;
 
  return cnt;
}

// ---------------------------------------
// ---------------------------------------
// ---------------------------------------

int ChnsEventShape::MultChrgPminLab(double pmin)
{
  int cnt=0;
  for (int i=0;i<fN;++i) 
	if (fCharge[i]!=0 && fLabList[i].P()>pmin) cnt++;
 
  return cnt;
}

// ---------------------------------------

int ChnsEventShape::MultChrgPmaxLab(double pmax)
{
  int cnt=0;
  for (int i=0;i<fN;++i) 
	if (fCharge[i]!=0 && fLabList[i].P()<pmax) cnt++;
 
  return cnt;
}

// ---------------------------------------

int ChnsEventShape::MultChrgPminCms(double pmin)
{
  int cnt=0;
  for (int i=0;i<fN;++i) 
	if (fCharge[i]!=0 && fCmsList[i].P()>pmin) cnt++;
 
  return cnt;
}

// ---------------------------------------

int ChnsEventShape::MultChrgPmaxCms(double pmax)
{
  int cnt=0;
  for (int i=0;i<fN;++i) 
	if (fCharge[i]!=0 && fCmsList[i].P()<pmax) cnt++;
 
  return cnt;
}

// ---------------------------------------
// ---------------------------------------
// ---------------------------------------

double ChnsEventShape::SumPminLab(double pmin)
{
  double sum=0;
  for (int i=0;i<fN;++i) 
	if (fLabList[i].P()>pmin) sum+=fLabList[i].P();
 
  return sum;
}

// ---------------------------------------

double ChnsEventShape::SumPmaxLab(double pmax)
{
  double sum=0;
  for (int i=0;i<fN;++i) 
	if (fLabList[i].P()<pmax) sum+=fLabList[i].P();
 
  return sum;
}

// ---------------------------------------

double ChnsEventShape::SumPminCms(double pmin)
{
  double sum=0;
  for (int i=0;i<fN;++i) 
	if (fCmsList[i].P()>pmin) sum+=fLabList[i].P();
 
  return sum;
}

// ---------------------------------------

double ChnsEventShape::SumPmaxCms(double pmax)
{
  double sum=0;
  for (int i=0;i<fN;++i) 
	if (fCmsList[i].P()<pmax) sum+=fLabList[i].P();
 
  return sum;
}

// ---------------------------------------
// ---------------------------------------
// ---------------------------------------

double ChnsEventShape::SumPtminLab(double ptmin)
{
  double sum=0;
  for (int i=0;i<fN;++i) 
	if (fLabList[i].Pt()>ptmin) sum+=fLabList[i].Pt();
 
  return sum;
}

// ---------------------------------------

double ChnsEventShape::SumPtmaxLab(double ptmax)
{
  double sum=0;
  for (int i=0;i<fN;++i) 
	if (fLabList[i].Pt()<ptmax) sum+=fLabList[i].Pt();
 
  return sum;
}

// ---------------------------------------

double ChnsEventShape::SumPtminCms(double ptmin)
{
  double sum=0;
  for (int i=0;i<fN;++i) 
	if (fCmsList[i].Pt()>ptmin) sum+=fLabList[i].Pt();
 
  return sum;
}

// ---------------------------------------

double ChnsEventShape::SumPtmaxCms(double ptmax)
{
  double sum=0;
  for (int i=0;i<fN;++i) 
	if (fCmsList[i].Pt()<ptmax) sum+=fLabList[i].Pt();
 
  return sum;
}

// ---------------------------------------
// ---------------------------------------
// ---------------------------------------

double ChnsEventShape::SumNeutEminLab(double emin)
{
  double sum=0;
  for (int i=0;i<fN;++i) 
	if (fCharge[i]==0 && fLabList[i].E()>emin) sum+=fLabList[i].E();
 
  return sum;
}

// ---------------------------------------

double ChnsEventShape::SumNeutEmaxLab(double emax)
{
  double sum=0;
  for (int i=0;i<fN;++i) 
	if (fCharge[i]==0 && fLabList[i].E()<emax) sum+=fLabList[i].E();
 
  return sum;
}

// ---------------------------------------

double ChnsEventShape::SumNeutEminCms(double emin)
{
  double sum=0;
  for (int i=0;i<fN;++i) 
	if (fCharge[i]==0 && fCmsList[i].E()>emin) sum+=fLabList[i].E();
 
  return sum;
}

// ---------------------------------------

double ChnsEventShape::SumNeutEmaxCms(double emax)
{
  double sum=0;
  for (int i=0;i<fN;++i) 
	if (fCharge[i]==0 && fCmsList[i].E()<emax) sum+=fLabList[i].E();
 
  return sum;
}

// ---------------------------------------
// ---------------------------------------
// ---------------------------------------

double ChnsEventShape::SumChrgPminLab(double pmin)
{
  double sum=0;
  for (int i=0;i<fN;++i) 
	if (fCharge[i]!=0 && fLabList[i].P()>pmin) sum+=fLabList[i].P();
 
  return sum;
}

// ---------------------------------------

double ChnsEventShape::SumChrgPmaxLab(double pmax)
{
  double sum=0;
  for (int i=0;i<fN;++i) 
	if (fCharge[i]!=0 && fLabList[i].P()<pmax) sum+=fLabList[i].P();
 
  return sum;
}

// ---------------------------------------

double ChnsEventShape::SumChrgPminCms(double pmin)
{
  double sum=0;
  for (int i=0;i<fN;++i) 
	if (fCharge[i]!=0 && fCmsList[i].P()>pmin) sum+=fLabList[i].P();
 
  return sum;
}

// ---------------------------------------

double ChnsEventShape::SumChrgPmaxCms(double pmax)
{
  double sum=0;
  for (int i=0;i<fN;++i) 
	if (fCharge[i]!=0 && fCmsList[i].P()<pmax) sum+=fLabList[i].P();
 
  return sum;
}

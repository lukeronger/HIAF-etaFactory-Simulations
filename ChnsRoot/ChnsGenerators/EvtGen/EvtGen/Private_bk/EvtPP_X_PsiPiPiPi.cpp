/* 
 * File:   EvtPP_X_PsiOmega_amp.cpp
 * Author: luchinsky
 * 
 * Created on November 20, 2015, 12:25 PM
 */

#include "EvtGenModels/EvtPP_X_PsiPiPiPi.hh"

EvtPP_X_PsiPiPiPi::EvtPP_X_PsiPiPiPi() {
    fRho=0.0070;
    fOmega=0.036; 
    g=0.3;
    ef=-11.0e-3;
// masses
    mPsi=3.097;
    mRho=775e-3;
    mOmega=782e-3;
    mD0=1864.84e-3; 
    mD0star=2006.96e-3;
    mDch=1869.61e-3;
    mDchstar=2010.26e-3;
    mPi=0.140;
    mp=0.938;
// widths
    gRho=147.8e-3;
    gOmega=8.5e-3;
    M0=mD0+mD0star;
    delta=mDch+mDchstar-mD0-mD0star;
    mu1=1/(1/mD0+1/mD0star); 
    mu2=1/(1/mDch+1/mDchstar);
    mX3872=M0+ef;
}

//EvtPP_X_PsiPiPiPi::EvtPP_X_PsiPiPiPi(const EvtPP_X_PsiPiPiPi& orig) {
    //fRho=0.0070;
    //fOmega=0.036;
    //g=0.3;
    //ef=-11.0e-3;
//// masses
    //mPsi=3.097;
    //mRho=775e-3;
    //mOmega=782e-3;
    //mD0=1864.84e-3;
    //mD0star=2006.96e-3;
    //mDch=1869.61e-3;
    //mDchstar=2010.26e-3;
    //mPi=0.140;
    //mp=0.938;
//// widths
    //gRho=147.8e-3;
    //gOmega=8.5e-3;
    //M0=mD0+mD0star;
    //delta=mDch+mDchstar-mD0-mD0star;
    //mu1=1/(1/mD0+1/mD0star); 
    //mu2=1/(1/mDch+1/mDchstar);
    //mX3872=M0+ef;
//}

EvtPP_X_PsiPiPiPi::~EvtPP_X_PsiPiPiPi() {
}

void EvtPP_X_PsiPiPiPi::init() { first_run=true;}

EvtDecayBase* EvtPP_X_PsiPiPiPi::clone() { return new EvtPP_X_PsiPiPiPi;}


std::string EvtPP_X_PsiPiPiPi::getName() { return "PP_X_PsiPiPiPi";}


EvtComplex EvtPP_X_PsiPiPiPi::GammaRho(double e) {
    double re=0;
    if(e>-0.22)
        re=(0.22 + e)*(0.00482257247884953 + 0.019270294080687776*e - 0.04671367839239516*pow(e,2) + 0.04555400166840043*pow(e,3) - 0.01612897179826872*pow(e,4));
    double im=0;
    if(e<-0.52)
        im=(1.0750344957161986 + e)*(5.138300634159228 + e)*(-0.00007248779607875129 - 0.00031904332040682567*e - 0.00031108295230229124*pow(e,2) + 0.00020204398926602088*pow(e,3) + 0.00025456812297365203*pow(e,4));
    return EvtComplex(re,im);
}

EvtComplex EvtPP_X_PsiPiPiPi::GammaOmega(double e) {
    double re=0;
    if(e>-0.08)
        re=(0.011796253489364951 + 0.18618690381100295*e - 0.4713412795464089*pow(e,2) + 0.5302956249880806*pow(e,3) - 0.21312126399444514*pow(e,4))*pow(0.08 + e,0.5);
    double im=0;
    if(e<-0.39)
        im=(0.1389466497882908 + e)*(0.36845257656244884 + e)*(-0.0006654546161676186 - 0.00195342835827875*e - 0.002920074216855949*pow(e,2) - 0.00240163046018167*pow(e,3) - 0.0007914194252011911*pow(e,4));
    return EvtComplex(re, im);
}


EvtComplex EvtPP_X_PsiPiPiPi::invDD(double E) {
    EvtComplex k1, k2;
    EvtComplex I(0,1);
    if(E>0) k1=sqrt(2*mu1*E); else k1=I*sqrt(-2*mu1*E);
    if(E>delta) k2=sqrt(2*mu2*(E-delta)); else k2=I*sqrt(-2*mu2*(E-delta));
//    EvtComplex DD=E-ef+I*(g*k1/2+g*k2/2+GammaRho(E)/2+GammaOmega(E)/2);
    EvtComplex DD=E-ef+I*(g*k1/2+g*k2/2);
    return 1/DD;
    
}

void EvtPP_X_PsiPiPiPi::initProbMax() {
    setProbMax(1.4);
    //setProbMax(1e-4);
    //setProbMax(5129590.032);
//    setProbMax(8852632134174057152712822654107737466457901435144297930009560658530013752066048.000);
}

void EvtPP_X_PsiPiPiPi::decay(EvtParticle* root) {
    root->initializePhaseSpace(getNDaug(), getDaugs());
    EvtVector4R P=root->getP4(),
            //pPsi=root->getDaug(0)->getP4(), //[R.K.02/2017] Unused variable?
            k1=root->getDaug(1)->getP4(),
            k2=root->getDaug(2)->getP4(),
            k3=root->getDaug(3)->getP4();
    double E=root->mass()-M0;
    double m2=(k1+k2+k3).mass2();
    EvtComplex I(0,1);


     if(first_run) {
        double ecm=P.mass();
        double maxProb;
        if(ecm<3.872)
            maxProb=6294.530185575099/(14.99339912976412 - ecm*ecm);
        else if(ecm>3.888)
            maxProb=48771.17877674893/(-14.998543742662166 + ecm*ecm);
        else
            maxProb=33382.35113756457/pow(-14.785164403737882 + ecm*ecm,3);
        maxAmp=sqrt(maxProb);
        first_run=false;
    };
//    maxAmp=1;
/*    double FF=1e4*sqrt(
        pow(0.8029999999999999 - sqrt(m2),3.4157402090974287)*pow(-0.42000000000000004 + sqrt(m2),12.892079529738266)
    );
 */
//    double FF=pow(P.mass()-mPsi-sqrt(m2),1.7381433100338395)*pow(-0.42000000000000004 + sqrt(m2),12.105505838174869);
    double FF=1;
    EvtVector4C k1k2k3=dual(EvtGenFunctions::directProd(k1,k2)).cont1(k3);
    EvtTensor4C ten=dual(EvtGenFunctions::directProd(P,k1k2k3));
    for(int iPsi=0; iPsi<3; ++iPsi) {
        for(int iPP=0; iPP<3; ++iPP) {
            EvtVector4C epsPsi=root->getDaug(0)->epsParent(iPsi);
            EvtVector4C epsPP=root->epsParent(iPP);
            EvtComplex amp=epsPP*ten.cont1(epsPsi)*invDD(E);
            amp=amp/(m2-(mOmega+I*gOmega/2)*(mOmega+I*gOmega/2));
            amp=amp/maxAmp/FF;
            vertex(iPP,iPsi,amp);
        };
    };
}

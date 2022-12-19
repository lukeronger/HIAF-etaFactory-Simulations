double model(double *x, double *par){

}

int fittingDalitz(){
	
ifstream in("N_vs_X_Y.txt");
double x[500], y[500], z[500], ex[500], ey[500], ez[500];
int N = 0;
while(in>>x[N]>>y[N]>>z[N]>>ex[N]>>ey[N]>>ez[N])N++;



TGraph2DErrors g2d(N,x,y,z,ex,ey,ez);
g2d.Draw("ap*");


return 0;
}

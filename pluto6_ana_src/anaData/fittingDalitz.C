
{
	
ifstream in("N_vs_X_Y_v2.txt");
double x[500], y[500], z[500], ex[500], ey[500], ez[500];
int N = 0;
while(in>>x[N]>>y[N]>>z[N]>>ex[N]>>ey[N]>>ez[N])N++;

TF2 model("model","[0]*(1+[1]*y+[2]*y*y+[3]*x+[4]*x*x+[5]*x*y)");
model.SetParNames("N","a","b","c","d","e");

TGraph2DErrors g2d(N,x,y,z,ex,ey,ez);
g2d.Draw("ap*");
g2d.GetXaxis()->SetTitle("X");
g2d.Fit("model");


}

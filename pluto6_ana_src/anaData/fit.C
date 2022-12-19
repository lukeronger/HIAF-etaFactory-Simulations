{
TFile file("out_GammaGamma.root");
//tree->Draw("X","Y>-0.6 && Y<-0.5","lego2");
tree->Draw("Y:X>>h2","","lego2");

TF2 model("model","[0]*(1+[1]*y+[2]*y*y+[3]*x+[4]*x*x+[5]*x*y+[6]*y*y*y+[7]*x*x*y+[8]*x*y*y+[9]*x*x*x)");
//h2->Fit("model");






}

{
TFile file("out_GammaGamma.root");
tree->Draw("X>>h","Y>-0.6 && Y<-0.5","");
//tree->Draw("Y:X>>h2","","lego2");

TF2 model("model","[0]*(1+[1]*y+[2]*y*y+[3]*x+[4]*x*x+[5]*x*y+[6]*y*y*y+[7]*x*x*y+[8]*x*y*y+[9]*x*x*x)");
//h2->Fit("model");

 TF1 model3("model3","[0]*(1+[1]*x+[2]*x*x+[3]*x*x*x)")
	 (TF1 &) Name: model3 Title: [0]*(1+[1]*x+[2]*x*x+[3]*x*x*x)
	 root [4] h->Fit("model3","","",-0.6,0.6)




}

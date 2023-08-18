void bkg_eta_EEGG(){

	auto * c1 = new TCanvas("c1","background process",600,600);
	c1->Range(0,0,200,200);
	gStyle->SetLineWidth(3);

	TLine * l;
        l = new TLine(20,140,60,140); l->Draw();
        l = new TLine(60,140,60+20*sqrt(2),140+20*sqrt(2)); l->Draw();

	TCurlyLine * cl;
	cl = new TCurlyLine(60,140,60,100);
	cl->SetWavy();
	cl->Draw();
	cl = new TCurlyLine(60,140,60+20*sqrt(3),120);
	cl->SetWavy();
	cl->Draw();

	TArrow * ar;
	ar = new TArrow(60+20*sqrt(3),120,60,100,0.03,"->-");
	ar->Draw();
        ar = new TArrow(60,100,60,60,0.03,"->-");
	ar->Draw();
	ar = new TArrow(60+20*sqrt(3),120,60+40*sqrt(3),100,0.03,"-<-");
	ar->Draw();

	TMarker * mar;
	mar = new TMarker(60,140,20);
	//create a mark with coordinate 60,140 and type 20.
	mar->SetMarkerSize(2);
        mar->Draw();

	mar = new TMarker(60,100,20);
	mar->SetMarkerSize(2);
	mar->Draw();

	mar = new TMarker(60+20*sqrt(3),120,20);
	mar->SetMarkerSize(2);
	mar->Draw();

	TLatex t;
	t.SetTextSize(0.06);
	t.SetTextFont(42);
	t.DrawLatex(30,145,"#eta");
	t.DrawLatex(90,170,"#pi^{0}");
	t.DrawLatex(65,60,"e^{-}");
	t.DrawLatex(60+40*sqrt(3),90,"e^{+}");

	c1->SaveAs("bkg_eta_EEGG.png");


}

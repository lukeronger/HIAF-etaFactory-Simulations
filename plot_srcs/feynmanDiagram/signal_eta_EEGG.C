void signal_eta_EEGG(){

        auto * c1 = new TCanvas("c1","signal process",600,600);
        c1->Range(0,0,200,200);
        gStyle->SetLineWidth(3);

	TLine * l;
        l = new TLine(20,140,60,140); l->SetLineStyle(7); l->Draw();
        l = new TLine(60,140,60+20*sqrt(2),140+20*sqrt(2)); l->SetLineStyle(7); l->Draw();
        l = new TLine(60,140,60+10*sqrt(2),140-10*sqrt(2)); l->SetLineStyle(7); l->Draw();

	TArrow * ar;
        ar = new TArrow(60+10*sqrt(2),140-10*sqrt(2),60+10*sqrt(2),110-10*sqrt(2),0.03,"->-");
        ar->Draw();
        ar = new TArrow(60+10*sqrt(2),140-10*sqrt(2),90+10*sqrt(2),140-10*sqrt(2),0.03,"-<-");
        ar->Draw();

	TMarker * mar;
	mar = new TMarker(60,140,20);
        mar->SetMarkerSize(2);
        mar->Draw();

        mar = new TMarker(60+10*sqrt(2),140-10*sqrt(2),20);
        mar->SetMarkerSize(2);
        mar->Draw();

	TLatex t;
	t.SetTextSize(0.06);
	t.SetTextFont(42);
	t.DrawLatex(30,145,"#eta");
	t.DrawLatex(90,170,"#pi^{0}");
	t.DrawLatex(60+10*sqrt(2),135,"h'");
	t.DrawLatex(65+10*sqrt(2),110-10*sqrt(2),"e^{-}");
	t.DrawLatex(95+10*sqrt(2),137-10*sqrt(2),"e^{+}");
      
	c1->SaveAs("sigal_eta_EEGG.png");



}

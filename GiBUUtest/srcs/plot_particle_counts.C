{
  gROOT->SetStyle("Pub");
  gStyle->SetOptFit(1);
  gStyle->SetOptStat(0);
  gStyle->SetLineWidth(1);
  gStyle->SetFrameLineWidth(1);
  gStyle->SetTextFont(42);
  gStyle->SetLegendFont(42);
  gStyle->SetLabelFont(42,"X");
  gStyle->SetTitleFont(42,"X");
  gStyle->SetLabelFont(42,"Y");
  gStyle->SetTitleFont(42,"Y");
  gStyle->SetLabelSize(0.05);

  const char* g1p[12] = {
			"p",
			"n",
			"#pi^{+}",
			"#pi^{0}",
			"#pi^{-}",
			"#eta",
			"K^{+}",
			"K^{0}",
			"#Lambda",
			"",
			"",
			""
  };  
  
  TH1F h1("h1","",19,0,19);
  double x;
  ifstream in;
  in.open("particle-counts.txt");
  for(int i=1;i<=9;i++)
    {
      in>>x;
      h1.SetBinContent(i*2,x);
    }
  h1.SetFillColor(kRed);
  h1.SetLineColor(kBlack);
  h1.SetLineWidth(1);
  h1.Draw();
  h1.GetYaxis()->SetTitle("Counts");
  h1.GetYaxis()->CenterTitle();  
  h1.GetXaxis()->LabelsOption("v");
  gPad->SetLeftMargin(0.15);
  gPad->SetRightMargin(0.08);
  gPad->SetTopMargin(0.09);
  gPad->SetBottomMargin(0.15);
  
  for(int i=1;i<=9;i++)
    {
      h1.GetXaxis()->SetBinLabel(i*2,g1p[i-1]);
    }

    h1.GetYaxis()->SetTitleSize(0.055);
    h1.GetXaxis()->SetTitleSize(0.055);  
    h1.GetYaxis()->SetLabelSize(0.05);
    h1.GetXaxis()->SetLabelSize(0.055);

    h1.SetFillColor(4);
    h1.SetLineColor(4);
    h1.GetXaxis()->SetLabelSize(0.09);
    h1.GetYaxis()->SetLabelSize(0.06);
    h1.GetYaxis()->SetTitleSize(0.06);
    h1.GetYaxis()->SetTitleOffset(1.1);
    h1.GetXaxis()->SetLabelOffset(0.01);

    gPad->SetLogy();




    TLine *line = new TLine(0,1.044,18,1.044);
    line->SetLineColor(kBlack);
    line->SetLineWidth(2);
    line->SetLineStyle(7);
    //line->Draw("same");

    
    TLatex latex;
    latex.SetTextSize(0.06);
    latex.SetTextAlign(12);  //align at top                                                                                                        
    //latex.DrawLatex(1.8,1.7,"#color[1]{#bf{g_{1}^{p} data}}");
    
}

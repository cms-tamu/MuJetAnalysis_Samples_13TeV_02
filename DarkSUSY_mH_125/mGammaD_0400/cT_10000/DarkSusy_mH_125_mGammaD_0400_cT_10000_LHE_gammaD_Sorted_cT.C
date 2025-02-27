{
//=========Macro generated from canvas: cnv/cnv
//=========  (Wed Mar 18 13:34:21 2015) by ROOT version5.34/18
   TCanvas *cnv = new TCanvas("cnv", "cnv",1320,22,904,928);
   gStyle->SetOptFit(1);
   gStyle->SetOptStat(0);
   gStyle->SetOptTitle(0);
   cnv->SetHighLightColor(2);
   cnv->Range(-106.25,-0.00185565,518.75,0.01241858);
   cnv->SetFillColor(0);
   cnv->SetBorderMode(0);
   cnv->SetBorderSize(2);
   cnv->SetTickx(1);
   cnv->SetTicky(1);
   cnv->SetLeftMargin(0.17);
   cnv->SetRightMargin(0.03);
   cnv->SetTopMargin(0.07);
   cnv->SetBottomMargin(0.13);
   cnv->SetFrameFillStyle(0);
   cnv->SetFrameBorderMode(0);
   cnv->SetFrameFillStyle(0);
   cnv->SetFrameBorderMode(0);
   
   TH1F *h_gammaD_1_cT_dummy = new TH1F("h_gammaD_1_cT_dummy","h_gammaD_1_cT_dummy",5,0,500);
   h_gammaD_1_cT_dummy->SetMaximum(0.01141938);
   h_gammaD_1_cT_dummy->SetLineStyle(0);
   h_gammaD_1_cT_dummy->SetMarkerStyle(20);
   h_gammaD_1_cT_dummy->GetXaxis()->SetTitle("c#tau of #gamma_{D} [mm]");
   h_gammaD_1_cT_dummy->GetXaxis()->SetLabelFont(42);
   h_gammaD_1_cT_dummy->GetXaxis()->SetLabelOffset(0.007);
   h_gammaD_1_cT_dummy->GetXaxis()->SetTitleSize(0.06);
   h_gammaD_1_cT_dummy->GetXaxis()->SetTitleOffset(0.95);
   h_gammaD_1_cT_dummy->GetXaxis()->SetTitleFont(42);
   h_gammaD_1_cT_dummy->GetYaxis()->SetTitle("Normalized Fraction of events / 100.0 mm");
   h_gammaD_1_cT_dummy->GetYaxis()->SetLabelFont(42);
   h_gammaD_1_cT_dummy->GetYaxis()->SetLabelOffset(0.007);
   h_gammaD_1_cT_dummy->GetYaxis()->SetTitleSize(0.05);
   h_gammaD_1_cT_dummy->GetYaxis()->SetTitleOffset(1.3);
   h_gammaD_1_cT_dummy->GetYaxis()->SetTitleFont(42);
   h_gammaD_1_cT_dummy->GetZaxis()->SetLabelFont(42);
   h_gammaD_1_cT_dummy->GetZaxis()->SetLabelOffset(0.007);
   h_gammaD_1_cT_dummy->GetZaxis()->SetTitleSize(0.06);
   h_gammaD_1_cT_dummy->GetZaxis()->SetTitleFont(42);
   h_gammaD_1_cT_dummy->Draw("");
   
   TH1F *h_gammaD_1_cT = new TH1F("h_gammaD_1_cT","h_gammaD_1_cT",5,0,500);
   h_gammaD_1_cT->SetBinContent(1,0.006383113);
   h_gammaD_1_cT->SetBinContent(2,0.002340517);
   h_gammaD_1_cT->SetBinContent(3,0.0008613614);
   h_gammaD_1_cT->SetBinContent(4,0.0003005891);
   h_gammaD_1_cT->SetBinContent(5,0.0001144202);
   h_gammaD_1_cT->SetBinContent(6,6.986053e-05);
   h_gammaD_1_cT->SetEntries(79999);

   Int_t ci;   // for color index setting
   ci = TColor::GetColor("#0000ff");
   h_gammaD_1_cT->SetLineColor(ci);
   h_gammaD_1_cT->SetLineWidth(2);
   h_gammaD_1_cT->SetMarkerStyle(20);
   h_gammaD_1_cT->GetXaxis()->SetLabelFont(42);
   h_gammaD_1_cT->GetXaxis()->SetLabelOffset(0.007);
   h_gammaD_1_cT->GetXaxis()->SetTitleSize(0.06);
   h_gammaD_1_cT->GetXaxis()->SetTitleOffset(0.95);
   h_gammaD_1_cT->GetXaxis()->SetTitleFont(42);
   h_gammaD_1_cT->GetYaxis()->SetLabelFont(42);
   h_gammaD_1_cT->GetYaxis()->SetLabelOffset(0.007);
   h_gammaD_1_cT->GetYaxis()->SetTitleSize(0.06);
   h_gammaD_1_cT->GetYaxis()->SetTitleOffset(1.3);
   h_gammaD_1_cT->GetYaxis()->SetTitleFont(42);
   h_gammaD_1_cT->GetZaxis()->SetLabelFont(42);
   h_gammaD_1_cT->GetZaxis()->SetLabelOffset(0.007);
   h_gammaD_1_cT->GetZaxis()->SetTitleSize(0.06);
   h_gammaD_1_cT->GetZaxis()->SetTitleFont(42);
   h_gammaD_1_cT->Draw("same");
   
   TH1F *h_gammaD_2_cT = new TH1F("h_gammaD_2_cT","h_gammaD_2_cT",5,0,500);
   h_gammaD_2_cT->SetBinContent(1,0.006344102);
   h_gammaD_2_cT->SetBinContent(2,0.002363627);
   h_gammaD_2_cT->SetBinContent(3,0.0008506944);
   h_gammaD_2_cT->SetBinContent(4,0.0003197967);
   h_gammaD_2_cT->SetBinContent(5,0.0001217794);
   h_gammaD_2_cT->SetBinContent(6,6.428643e-05);
   h_gammaD_2_cT->SetEntries(79999);

   ci = TColor::GetColor("#ff0000");
   h_gammaD_2_cT->SetLineColor(ci);
   h_gammaD_2_cT->SetLineWidth(2);
   h_gammaD_2_cT->SetMarkerStyle(20);
   h_gammaD_2_cT->GetXaxis()->SetLabelFont(42);
   h_gammaD_2_cT->GetXaxis()->SetLabelOffset(0.007);
   h_gammaD_2_cT->GetXaxis()->SetTitleSize(0.06);
   h_gammaD_2_cT->GetXaxis()->SetTitleOffset(0.95);
   h_gammaD_2_cT->GetXaxis()->SetTitleFont(42);
   h_gammaD_2_cT->GetYaxis()->SetLabelFont(42);
   h_gammaD_2_cT->GetYaxis()->SetLabelOffset(0.007);
   h_gammaD_2_cT->GetYaxis()->SetTitleSize(0.06);
   h_gammaD_2_cT->GetYaxis()->SetTitleOffset(1.3);
   h_gammaD_2_cT->GetYaxis()->SetTitleFont(42);
   h_gammaD_2_cT->GetZaxis()->SetLabelFont(42);
   h_gammaD_2_cT->GetZaxis()->SetLabelOffset(0.007);
   h_gammaD_2_cT->GetZaxis()->SetTitleSize(0.06);
   h_gammaD_2_cT->GetZaxis()->SetTitleFont(42);
   h_gammaD_2_cT->Draw("same");
   
   TLegend *leg = new TLegend(0.46,0.6744444,0.6955556,0.7644444,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.02777778);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   TLegendEntry *entry=leg->AddEntry("h_gammaD_1_cT","1st dark photon (leading p_{T})","L");

   ci = TColor::GetColor("#0000ff");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   entry=leg->AddEntry("h_gammaD_2_cT","2nd dark photon","L");

   ci = TColor::GetColor("#ff0000");
   entry->SetLineColor(ci);
   entry->SetLineStyle(1);
   entry->SetLineWidth(2);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   
   leg = new TLegend(0.4566667,0.82,0.7822222,0.9066667,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextSize(0.02777778);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   entry=leg->AddEntry("NULL","#splitline{pp #rightarrow h #rightarrow 2n_{1} #rightarrow 2n_{D} + 2 #gamma_{D} #rightarrow 2n_{D} + 4#mu}{#splitline{m_{h} = 125 GeV, m_{n_{1}} = 10 GeV, m_{n_{D}} = 1 GeV}{m_{#gamma_{D}} = 0.4 GeV, c#tau_{#gamma_{D}} = 100. mm}}","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   
   leg = new TLegend(0.17,0.935,0.97,1,NULL,"brNDC");
   leg->SetBorderSize(0);
   leg->SetTextAlign(22);
   leg->SetTextSize(0.045);
   leg->SetLineColor(1);
   leg->SetLineStyle(1);
   leg->SetLineWidth(1);
   leg->SetFillColor(0);
   leg->SetFillStyle(0);
   entry=leg->AddEntry("NULL","CMS Simulation (LHE) 13 TeV","h");
   entry->SetLineColor(1);
   entry->SetLineStyle(1);
   entry->SetLineWidth(1);
   entry->SetMarkerColor(1);
   entry->SetMarkerStyle(21);
   entry->SetMarkerSize(1);
   entry->SetTextFont(42);
   leg->Draw();
   cnv->Modified();
   cnv->cd();
   cnv->SetSelected(cnv);
}

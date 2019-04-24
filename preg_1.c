#include "TTree.h"


void preg_1()
{ TCanvas *c_1=new TCanvas("c_1","MEAN SHOWER-TRACK",500,600,500,600);
  c_1->Divide(1,2);

  c_1->cd(1); 
  TTree *p1= new TTree("ICE CUBE","Promedio angular");
  p1->ReadFile("shower.txt","ID:Energy:Errmin:Errmax:Time_MJD:Decli:Ecua:Med_Ang");
  p1->Draw("Med_Ang");

  c_1->cd(2);
  TTree *p2= new TTree("ICE CUBE","Promedio angular");
  p2->ReadFile("track.txt","ID:Energy:Errmin:Errmax:Time_MJD:Decli:Ecua:Med_Ang");
  p2->Draw("Med_Ang");

}

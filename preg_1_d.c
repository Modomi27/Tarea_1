#include "TTree.h"
void preg_1_d()
{  TCanvas *c_1=new TCanvas("c_1","MEAN SHOWER-TRACK",500,600,500,600);
   c_1->Divide(1,2);

  c_1->cd(1); 
  TTree *p1= new TTree("ICE CUBE","");
  p1->ReadFile("shower.txt","ID:Energy_shower:Errmin:Errmax:Time_MJD:Decli:Ecua:Med_Ang");
  p1->Draw("Energy_shower");
  c_1->cd(2); 
  TTree *p2= new TTree("ICE CUBE","");
  p2->ReadFile("track.txt","ID:Energy_track:Errmin:Errmax:Time_MJD:Decli:Ecua:Med_Ang");
  p2->Draw("Energy_track");
  
}

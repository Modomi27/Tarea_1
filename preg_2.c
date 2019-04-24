#include "TTree.h"

  void preg_2()
{
  TTree *p1= new TTree("ICE CUBE","");
  p1->ReadFile("IceCube.txt","ID:Energy:Errmin:Errmax:Time_MJD:Decli:Ecua:Med_Ang");
  p1->Draw("ID:Ecua");

}

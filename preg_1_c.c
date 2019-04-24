#include "TTree.h"

void preg_1_c()
{
TTree *tunix = new TTree("ICECUBE","Time unix");
tunix->ReadFile("IceCube.txt","ID:Energy:Errmin:Errmax:Time_MJD:Decli:Ecua:Med_Ang");
tunix->Scan("Time_MJD:(Time_MJD-40587)*86400","ID==1");

}

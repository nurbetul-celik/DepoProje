#include "geneldurum.h"
#include <Veri/depo.h>
#include<stdexcept>
#include<iostream>
#include<iomanip>
#include<array>


geneldurum::geneldurum(Depo &d):depoislemi(d)
{}


void geneldurum::sondurum()
{
    istream &operator >>(istream &girdi,Depo &d)

        girdi>>setw(2)>>d.urungiris();
        girdi.ignore();



    ostream &operator <<(ostream &cikti,Depo &d)

        cikti<<setw(2)>>d.uruncikis();
               cikti.ignore();





}

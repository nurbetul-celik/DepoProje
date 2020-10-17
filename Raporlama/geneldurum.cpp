#include "geneldurum.h"
#include <iostream>
#include <string>
#include <Veri/depo.h>
#include <iomanip>
 #include <stdexcept>

GenelDurum::GenelDurum(Depo &d):depoislemi(d)
{
}


istream &operator >>(istream &girdi, GenelDurum &d)

{  girdi>>" ">>girdi.UrunNo;
    girdi.ignore();
    girdi>>"">girdi.tarih;
    girdi.ignore();
    girdi>>" ">girdi.miktar;
}
               ostream &operator <<(ostream &cikti,const GenelDurum &d)

  {  cikti<<d.UrunNo<<d.tarih<<d.miktar;
    return cikti;
  }

#ifndef DEPOHAREKETISLEMI_H
#define DEPOHAREKETISLEMI_H
#include <Veri/depo.h>
#include<vector>
#include<iomanip>
#include<fstream>
#include<Veri/depocikisi.h>
#include<Veri/depogirisi.h>
#include<iostream>

using namespace std;
class DepoHareketIslemi
{
public:

   DepoHareketIslemi(Depo &d);
   void GenelDurum();
   void GunlukDurum();
   void AradakiDurum();


private:

    Depo &depoislemi;


};

#endif // DEPOHAREKETISLEMI_H

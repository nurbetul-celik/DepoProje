#ifndef DEPOGIRISISLEMI_H
#define DEPOGIRISISLEMI_H
#include <Veri/depo.h>

class DepoGirisIslemi
{
public:
    DepoGirisIslemi(Depo &d);
    void UrunEkle();
private:
   Depo &depoislemi;

};

#endif // DEPOGIRISISLEMI_H

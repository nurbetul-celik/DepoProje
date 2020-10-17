#ifndef DEPOHAREKETLERIISLEMI_H
#define DEPOHAREKETLERIISLEMI_H
#include <Veri/depo.h>

class DepoHareketleriIslemi
{
public:
    DepoHareketleriIslemi(Depo &d);
    void gunlukdurum();
    void geneldurum();
    void arama();
private:
    Depo &depoislemi;
};

#endif // DEPOHAREKETLERIISLEMI_H

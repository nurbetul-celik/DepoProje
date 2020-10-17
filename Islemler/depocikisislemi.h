#ifndef DEPOCIKISISLEMI_H
#define DEPOCIKISISLEMI_H
#include<Veri/depo.h>
class DepoCikisIslemi
{
public:
    DepoCikisIslemi(Depo &d);
    void UrunAl();
private:
    Depo &depoislemi;
};

#endif // DEPOCIKISISLEMI_H

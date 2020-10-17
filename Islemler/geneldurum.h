#ifndef GENELDURUM_H
#define GENELDURUM_H
#include <Veri/depo.h>
#include<vector>

class geneldurum
{
public:
    geneldurum(Depo &d);
    friend istream &operator>>(istream &girdi, Depo &dc  );
    friend ostream &operator<<(ostream &cikti,const Depo &dc);
    void sondurum();
private:
  Depo &depoislemi;
};

#endif // GENELDURUM_H

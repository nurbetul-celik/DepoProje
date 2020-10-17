#ifndef GENELDURUM_H
#define GENELDURUM_H
#include<Veri/depo.h>
#include<string>
#include<iostream>
#include<vector>



class GenelDurum
{
public:
    friend void GenelDurum(Depo &d);
 //GenelDurum(Depo &d);
    friend istream &operator >>(istream &girdi,GenelDurum &d);
    friend ostream &operator <<(ostream &cikti, const GenelDurum &d);


private:
    Depo &depoislemi;
   // vector<DepoGirisi> DepoGirisIslemleri;
 //   vector<DepoCikisi> DepoCikisIslemleri;
    string UrunNo;
    string tarih;
    int miktar;
};

#endif // GENELDURUM_H

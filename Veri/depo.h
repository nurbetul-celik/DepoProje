#ifndef DEPO_H
#define DEPO_H
#include<vector>
#include<Veri/depocikisi.h>
#include<Veri/depogirisi.h>
#include <fstream>
using namespace std;

class Depo
{
public:
    Depo();
    ~Depo();

    void  urungiris(DepoGirisi &veri);

    void uruncikis(DepoCikisi &veri);

    int DepoyaGelenMiktar(string hesap);
    int DepodanGidenMiktar(string hesap);
    int kalanUrun(string hesap);
    int eklenenUrun(string hesap);

private:

    vector<DepoGirisi> DepoGirisIslemleri;
    vector<DepoCikisi> DepoCikisIslemleri;

    friend class DepoHareketIslemi;
};

#endif // DEPO_H

#ifndef DEPOGIRISI_H
#define DEPOGIRISI_H
#include <string>
using namespace std;

class DepoGirisi
{
public:
    DepoGirisi(string urun="",string gun="20100102",int adet=0.0);

    string getUrunNo() const;
    void setUrunNo(const string &value);

    string getTarih() const;
    void setTarih(const string &value);

    int getMiktar() const;
    void setMiktar(int value);

private:
    string UrunNo;
    string tarih;
    int miktar;
};

#endif // DEPOGIRISI_H

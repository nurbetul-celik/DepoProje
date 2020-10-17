#ifndef DEPOCIKISI_H
#define DEPOCIKISI_H
#include <string>
using namespace std;

class DepoCikisi
{
public:
    DepoCikisi(string urun="",string gun="20100102",int adet=0.0);
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

#endif // DEPOCIKISI_H

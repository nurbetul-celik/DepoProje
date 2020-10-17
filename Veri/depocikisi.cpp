#include "depocikisi.h"

DepoCikisi::DepoCikisi(string urun, string gun, int adet)
{
UrunNo=urun;
tarih=gun;
miktar=adet;
}

string DepoCikisi::getUrunNo() const
{
    return UrunNo;
}

void DepoCikisi::setUrunNo(const string &value)
{
    UrunNo = value;
}

string DepoCikisi::getTarih() const
{
    return tarih;
}

void DepoCikisi::setTarih(const string &value)
{
    tarih = value;
}

int DepoCikisi::getMiktar() const
{
    return miktar;
}

void DepoCikisi::setMiktar(int value)
{
    miktar = value;
}

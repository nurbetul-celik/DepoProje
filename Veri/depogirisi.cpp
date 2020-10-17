#include "depogirisi.h"

DepoGirisi::DepoGirisi(string urun, string gun, int adet)
{
UrunNo=urun;
miktar=adet;
tarih=gun;
}

string DepoGirisi::getUrunNo() const
{
    return UrunNo;
}

void DepoGirisi::setUrunNo(const string &value)
{
    UrunNo = value;
}

string DepoGirisi::getTarih() const
{
    return tarih;
}

void DepoGirisi::setTarih(const string &value)
{
    tarih = value;
}

int DepoGirisi::getMiktar() const
{
    return miktar;
}

void DepoGirisi::setMiktar(int value)
{
    miktar = value;
}


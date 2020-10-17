#include "depo.h"
#include<fstream>
#include <iostream>
Depo::Depo()
{
    ifstream dosya("depo_veri.txt",ios_base::in);

    if(!dosya.is_open())
    {
        cerr <<"Dosya Bulunamadi..."<<endl;
        return;
    }
    int UrunGirisSayisi,UrunCikisSayisi;
    dosya>>UrunGirisSayisi;
    dosya>>UrunCikisSayisi;

    for(int i=0;i<UrunGirisSayisi;i++)
    {
        string UrunNo;
        string tarih;
        int miktar;
        dosya>>UrunNo;
        dosya>>tarih;
        dosya>>miktar;

        DepoGirisi dgi(UrunNo,tarih,miktar);
        urungiris(dgi);

    }
    for(int i=0;i<UrunCikisSayisi;i++)
    {
        string UrunNo;
        string tarih;
        int miktar;
        dosya>>UrunNo;
        dosya>>tarih;
        dosya>>miktar;
        DepoCikisi dci(UrunNo,tarih,miktar);
        uruncikis(dci);

    }
    dosya.close();
}
Depo::~Depo()
{
    ofstream dosya("depo_veri.txt",ios_base::out);
    dosya<<DepoGirisIslemleri.size()<<endl;
    dosya<<DepoCikisIslemleri.size()<<endl;
    for(auto ekleme:DepoGirisIslemleri)
    {
        dosya<<ekleme.getUrunNo()<<" ";
        dosya<<ekleme.getTarih()<<" ";
        dosya<<ekleme.getMiktar()<<endl;

    }
    for(auto cikarma:DepoCikisIslemleri)
    {
        dosya<<cikarma.getUrunNo()<<" ";
        dosya<<cikarma.getTarih()<<" ";
        dosya<<cikarma.getMiktar()<<endl;

    }
    dosya.close();
}


void Depo::urungiris(DepoGirisi &veri)
{
    DepoGirisIslemleri.push_back(veri);
}

void Depo::uruncikis(DepoCikisi &veri)
{
    DepoCikisIslemleri.push_back(veri);
}


int Depo::DepoyaGelenMiktar(string hesap)
{  int toplam=0;
    for(auto veri:DepoGirisIslemleri)
        if(veri.getUrunNo()==hesap)
        {
            toplam +=veri.getMiktar();

        }
    return toplam;

}

int Depo::DepodanGidenMiktar(string hesap)
{
    int toplam=0;
    for(auto veri:DepoCikisIslemleri)
        if(veri.getUrunNo()==hesap)
        {
            toplam+=veri.getMiktar();

        }
    return toplam;
}

int Depo::kalanUrun(string hesap)
{
    return DepoyaGelenMiktar(hesap)-DepodanGidenMiktar(hesap);
}

int Depo::eklenenUrun(string hesap)
{
    int t=0;
    t=t+DepoyaGelenMiktar(hesap);
    return t;
}












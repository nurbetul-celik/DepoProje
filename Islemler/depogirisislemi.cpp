#include "depogirisislemi.h"
#include<iostream>
#include <Veri/depogirisi.h>
#include <string>
using namespace std;

DepoGirisIslemi::DepoGirisIslemi(Depo &d):depoislemi(d)
{

}

void DepoGirisIslemi::UrunEkle()
{
    string UrunNo;
    string tarih;
    int miktar;
    int varmi;
    cout<<"Urun Numarasi: ";
    cin>>UrunNo;
    varmi=depoislemi.eklenenUrun(UrunNo);
     cout<<"Urun Sayisi: "<<varmi <<endl;
    cout<<"Urun Adedi: ";
    cin>>miktar;
    if(miktar<=0){
        cerr<<"Urun giris sayisi sıfır veya negatif olamaz!"<<endl
             <<"Islem basarisiz!"<<endl;
        return;

    }
    cout<<"!Tarih girisi yaparken bosluk birakmayiniz."<<endl;
    cout<<" ! Urun giris tarihini 20100102 itibaren urun girisi yapiniz."<<endl;
    cout<<"Urun Giris Tarihi: ";
    cin>>tarih;
    DepoGirisi dgi(UrunNo,tarih,miktar);
     depoislemi.urungiris(dgi);
     cout<<"Islem Basarili"<<endl;
}



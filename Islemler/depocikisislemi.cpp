#include "depocikisislemi.h"
#include <Veri/depocikisi.h>
#include<string>
#include<iostream>
using namespace std;
DepoCikisIslemi::DepoCikisIslemi(Depo &d):depoislemi(d)
{}

void DepoCikisIslemi::UrunAl()
{
  string UrunNo;
    string tarih;
    int miktar;
    int kalan;
    cout<<"Urun Numarasi: ";
    cin>>UrunNo;
    kalan=depoislemi.kalanUrun(UrunNo);
    cout<<"Urun Sayisi: "<<kalan <<endl;
    cout<<"Urun Adedi: ";
    cin>>miktar;
    while (miktar>kalan) {
        cerr<<"Urunun Kalmadi..."<<"Kalan Urun Sayisi: "<<kalan <<endl;
        cout<<"Urun Sayisi:  "<<endl;
              cin>>miktar;

      }
    if(miktar<=0)
    {  cerr<<"Urun cikis sayisi sifir veya negatif olamaz!"<<endl
          <<"Islem basarisiz!"<<endl;
       return;

    }

    cout<<"Urun Cikis Tarihi: ";
    cin>>tarih;
    cout<<"İslem Basarili"<<endl;
    DepoCikisi dci(UrunNo,tarih,miktar);
            depoislemi.uruncikis(dci);
}

#include "depohareketislemi.h"

#include "Veri/depo.h"

using namespace std;

DepoHareketIslemi::DepoHareketIslemi(Depo &d):depoislemi(d) {}

void DepoHareketIslemi::GenelDurum()
{
    cout << "******Urun Giris Islemleri******" << endl;
    cout <<""
           ""<<endl;
    cout << setw(10) << "UrunNo" << setw(13) << "Tarih" << setw(10) << "Miktar" << endl;

    for (DepoGirisi i: depoislemi.DepoGirisIslemleri){
        cout << setw(10) << i.getUrunNo()
             << setw(13) << i.getTarih()
             << setw(10) << i.getMiktar() << endl;

    }
    cout<<" "
          ""<<endl;
    cout << "******Urun Cikis Islemleri******"<<endl
         <<" "
            ""<<endl;
    cout << setw(10) << "UrunNo" << setw(13) << "Tarih" << setw(10) << "Miktar" << endl
         <<""
           "" <<endl;

    for (DepoCikisi i: depoislemi.DepoCikisIslemleri){
        cout << setw(10) << i.getUrunNo()
             << setw(13) << i.getTarih()
             << setw(10) << i.getMiktar() << endl;

    }
    cout<<" "
          " "<<endl;
}

void DepoHareketIslemi::GunlukDurum()
{
    string Tarih;
    cout << "Tarih Giriniz: ";
    cin >> Tarih;
    cout<<""
          ""<<endl;
    cout <<"-"<<""<<Tarih<<"'inde Yapilan Islemler-" << endl
         <<""
           ""<<endl;
    cout << "******Urun Giris Islemleri******"
         <<" "
           ""<<endl;
    cout << setw(10) << "UrunNo" << setw(13) << "Tarih" << setw(10) << "Miktar" << endl
         <<""
           ""<<endl;
  for (DepoGirisi i: depoislemi.DepoGirisIslemleri){
        if(i.getTarih() == Tarih){
        cout << setw(10) << i.getUrunNo()
             << setw(13) << i.getTarih()
             << setw(10) << i.getMiktar() << endl;}
    }
  cout<<""
        ""<<endl;
    cout << "******Urun Cikis Islemleri******" << endl
         <<" "
           ""<<endl;
    cout << setw(10) << "UrunNo" << setw(13) << "Tarih" << setw(10) << "Miktar" << endl
         <<""
           ""<<endl;

    for (DepoCikisi i: depoislemi.DepoCikisIslemleri){
        if(i.getTarih() == Tarih){
        cout << setw(10) << i.getUrunNo()
             << setw(13) << i.getTarih()
             << setw(10) << i.getMiktar() << endl;}

    }
    cout<<""
          ""<<endl;
}

void DepoHareketIslemi::AradakiDurum()
{
    string tarih1;
    string tarih2;
    cout<<"Ilk Tarihi Giriniz: ";
    cin>>tarih1;
    cout<<"Son Tarihi Giriniz: ";
    cin>>tarih2;
    cout<<""
          ""<<endl;
    cout<<tarih1<<" "<< "ile "<<" "<<tarih2<<" " <<"arasinda yapilan islemler"<<endl
       <<""
         ""<<endl;
    cout<<setw(10)<< "Urun No" <<setw(13)<< "Tarih" << setw(10) << "Miktar" <<endl;
    for(DepoGirisi i:depoislemi.DepoGirisIslemleri){
        if(i.getTarih()>=tarih1 && i.getTarih()<=tarih2)
        {
            cout<<setw(10)<<i.getUrunNo()
               <<setw(13)<<i.getTarih()
              <<setw(10)<<i.getMiktar()<<endl;

        }}
    cout<<""
          ""<<endl;
    for(DepoCikisi i:depoislemi.DepoCikisIslemleri){
            if(i.getTarih()>=tarih1 && i.getTarih()<=tarih2)
            {
                cout<<setw(10)<<i.getUrunNo()
                   <<setw(13)<<i.getTarih()
                  <<setw(10)<<i.getMiktar()<<endl;

            }


    }
    cout<<""
          ""<<endl;
}









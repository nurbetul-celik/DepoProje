#include "menu.h"
#include "Islemler/depocikisislemi.h"

#include"depohareketislemi.h"
#include"Islemler/depogirisislemi.h"

#include <string>
#include<iostream>
#include <vector>
#include<fstream>

using namespace std;

menu::menu(){}
void menu::calistir()
{       while (true) {
        int secim;
        cout << "HOSGELDINIZ" << endl
             << "Bir Islem Seciniz " << endl
             << "[1] Depo Urun Girisi " << endl
             << "[2] Depo Urun Cikisi " << endl
             << "[3] Depo Durumu" << endl
             << "[4] CIKIS" << endl
             << " Seciminiz :";
        cin >> secim;
        if(secim==1)
        {    DepoGirisIslemi islem(depoislemi);
            islem.UrunEkle();

        }
        else if(secim==2)
        {   DepoCikisIslemi islem(depoislemi);
            islem.UrunAl();

        }
        else if(secim==3)
        {   int sec;
            cout <<"Bir Depo Hareketi Seciniz: "<<endl
                 <<"[1] Genel Durum"<<endl
                 <<"[2] Gunluk Durum"<<endl
                 <<"[3]Iki Tarih Arasi Arama"<<endl

                 <<"Seciminiz: ";

            cin>>sec;
            if (sec==1)
            { DepoHareketIslemi islem(depoislemi);
                islem.GenelDurum();}
            else   if(sec==2){
                DepoHareketIslemi islem(depoislemi);
                islem.GunlukDurum();
            }
            else if(sec==3){

                DepoHareketIslemi islem(depoislemi);
                islem.AradakiDurum();
            }

        }

           else {
                break;
            }
  }}



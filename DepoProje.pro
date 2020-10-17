TEMPLATE = app
CONFIG += console c++11
CONFIG -= app_bundle
CONFIG -= qt

SOURCES += main.cpp \
    Veri/depogirisi.cpp \
    Veri/depocikisi.cpp \
    Veri/depo.cpp \
    Islemler/depogirisislemi.cpp \
    Islemler/depocikisislemi.cpp \
    Islemler/menu.cpp \
    Islemler/depohareketislemi.cpp \
    Islemler/depoyonetim.cpp

HEADERS += \
    Veri/depogirisi.h \
    Veri/depocikisi.h \
    Veri/depo.h \
    Islemler/depogirisislemi.h \
    Islemler/depocikisislemi.h \
    Islemler/menu.h \
    Islemler/depohareketislemi.h \
    Islemler/depoyonetim.h

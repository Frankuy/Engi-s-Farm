#ifndef GEPREKSUSU_H
#define GEPREKSUSU_H

#include <iostream>
#include <string>
#include "SideProduct.h"
using namespace std;

class GeprekSusu: public SideProduct{
    //Kelas turunan sideProduct yang menggabungkan:
    //daging ayam dan susu sapi
    public:
        //KONSTRUKTOR
        GeprekSusu(Player user);
};

#endif
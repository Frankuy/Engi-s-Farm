#ifndef PAKETSTEAK_H
#define PAKETSTEAK_H

#include <iostream>
#include <string>
#include "SideProduct.h"
using namespace std;

class PaketSteak: public SideProduct{
    //Kelas turunan side product yang merupakan gabungan
    //dari telur ayam, daging sapi, dan susu sapi
    public:
        //KONSTRUKTOR
        PaketSteak(Player user);
};

#endif
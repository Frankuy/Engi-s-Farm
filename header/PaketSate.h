#ifndef PAKETSATE_H
#define PAKETSATE_H

#include <iostream>
#include <string>
#include "SideProduct.h"
using namespace std;

class PaketSate: public SideProduct{
    //Kelas yang merepresentasikan Sate-satean,
    //gabungan dari daging ayam dan daging sate
    public:
        //KONSTRUKTOR
        PaketSate(Player user);
};

#endif
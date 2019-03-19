#ifndef SUSUKUDA_H
#define SUSUKUDA_H

#include <iostream>
#include <string>
#include "FarmProduct.h"
using namespace std;

class SusuKuda: public FarmProduct{
    //Kelas yang merepresentasikan susu kuda
    public:
        //KONSTRUKTOR
        SusuKuda(string namaProduct, int harga);
};

#endif
#ifndef SUSUSAPI_H
#define SUSUSAPI_H

#include <iostream>
#include <string>
#include "FarmProduct.h"
using namespace std;

class SusuSapi: public FarmProduct{
    //Kelas yang merepresentasikan susu sapi
    public:
        //KONSTRUKTOR
        SusuSapi(string namaProduct, int harga);
};

#endif
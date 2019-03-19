#ifndef SUSUDOMBA_H
#define SUSUDOMBA_H

#include <iostream>
#include <string>
#include "FarmProduct.h"
using namespace std;

class SusuDomba: public FarmProduct{
    //Kelas yang merepresentasikan susu domba
    public:
        //KONSTRUKTOR
        SusuDomba(string namaProduct, int harga);
};

#endif
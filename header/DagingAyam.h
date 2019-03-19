#ifndef DAGINGAYAM_H
#define DAGINGAYAM_H

#include <iostream>
#include <string>
#include "FarmProduct.h"
using namespace std;

class DagingAyam: public FarmProduct{
    //Kelas yang merepresentasikan daging ayam
    public:
        //KONSTRUKTOR
        DagingAyam(string namaProduct, int harga);
};

#endif
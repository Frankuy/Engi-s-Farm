#ifndef DAGINGBEBEK_H
#define DAGINGBEBEK_H

#include <iostream>
#include <string>
#include "FarmProduct.h"
using namespace std;

class DagingBebek: public FarmProduct{
    //Kelas yang merepresentasikan daging bebek
    public:
        //KONSTRUKTOR
        DagingBebek(string namaProduct, int harga);
};

#endif
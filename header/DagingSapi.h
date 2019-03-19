#ifndef DAGINGSAPI_H
#define DAGINGSAPI_H

#include <iostream>
#include <string>
#include "FarmProduct.h"
using namespace std;

class DagingSapi: public FarmProduct{
    //Kelas yang merepresentasikan daging sapi
        //KONSTRUKTOR
        DagingSapi(string namaProduct, int harga);
};

#endif
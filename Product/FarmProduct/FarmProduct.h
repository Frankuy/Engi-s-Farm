#include <iostream>
#include <string>
#include "../Product.h"
using namespace std;

#ifndef FARMPRODUCT_H
#define FARMPRODUCT_H
class FarmProduct : public Product {
    /* Kelas ini ialah merepresentasikan Product yang dihasilkan dari hewan*/
    public:
        FarmProduct(string namaProduct, int harga);
};
#endif
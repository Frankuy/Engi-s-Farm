#include <iostream>
#include "FarmAnimal.h"
#include "FarmProduct.h"
#include <string>
using namespace std;

#ifndef MILKANIMAL_H
#define MILKANIMAL_H
class MilkProducingFarmAnimal : public FarmAnimal {
    /* Kelas ini merepresentasikan Hewan yang dapat menghasilkan susu */
    protected:
        bool ableProduceMilk; //apakah hewan sudah bisa memproduksi susu atau tidak.
                              //tergantung status lapar dan produknya sudah diambil atau belum

    public:
        //KONSTRUKTOR
        MilkProducingFarmAnimal(Point, string, string, int);

        //SETTER AND GETTER
        void setAbleProduceMilk(bool);
        bool getAbleProduceMilk();

        //METHOD
        FarmProduct produce(); //Menghasilkan farmProduct berupa milk
};
#endif
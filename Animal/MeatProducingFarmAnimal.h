#include <iostream>
#include <string>
#include "FarmAnimal.h"
#include "../Product/FarmProduct/FarmProduct.h"
using namespace std;

#ifndef MEATANIMAL_H
#define MEATANIMAL_H
class MeatProducingFarmAnimal : public FarmAnimal {
    /* Kelas ini merepresentasikan Hewan yang dapat menghasilkan daging */
    protected:
        bool ableProduceMeat; //apakah hewan sudah bisa memproduksi daging atau tidak.
                              //tergantung status lapar dan produknya sudah diambil atau belum

    public:
        //KONSTRUKTOR
        MeatProducingFarmAnimal(Point, string, string, int);
        
        //SETTER AND GETTER
        void setAbleProduceMeat(bool);
        bool getAbleProduceMeat();
        
        //METHOD
        FarmProduct produce(); //menghasilkan farmproduct berupa meat
};
#endif
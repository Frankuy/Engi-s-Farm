#include <iostream>
#include "FarmAnimal.h"
#include "FarmProduct.h"
#include <string>
using namespace std;

#ifndef EGGANIMAL_H
#define EGGANIMAL_H
class EggProducingFarmAnimal : public FarmAnimal {
    /* Kelas ini merepresentasikan Hewan yang dapat menghasilkan telur */
    protected:
        bool ableProduceEgg; //apakah hewan sudah bisa memproduksi telur atau tidak.
                            //tergantung status lapar dan produknya sudah diambil atau belum

    public:
        //KONSTRUKTOR
        EggProducingFarmAnimal(Point, string, string, int);

        //SETTER AND GETTER
        bool getAbleProduceEgg();
        void setAbleProduceEgg(bool);

        //METHOD
        FarmProduct produce(); //Menghasilkan FarmProduct yaitu egg
};
#endif
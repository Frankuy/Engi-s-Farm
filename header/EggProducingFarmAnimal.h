#ifndef _EGGPRODUCINGFARMANIMAL_H
#define _EGGPRODUCINGFARMANIMAL_H

#include <iostream>
#include "FarmAnimal.h"
#include "FarmProduct.h"
#include <string>
using namespace std;

class EggProducingFarmAnimal : public FarmAnimal {
    protected:
        bool ableProduceEgg; //apakah hewan sudah bisa memproduksi telur atau tidak.
                            //tergantung status lapar dan produknya sudah diambil atau belum

    public:
        //KONSTRUKTOR
        EggProducingFarmAnimal(Point, string, string, int);

        //SETTER AND GETTER
        bool getAbleProduceEgg();
        bool setAbleProduceEgg();

        //METHOD
        FarmProduct produce();
};

#endif
#ifndef BEBEK_H
#define BEBEK_H

#include "../Product/FarmProduct/TelurBebek.h"
#include "../Product/FarmProduct/DagingBebek.h"
#include "EggProducingFarmAnimal.h"
#include "MeatProducingFarmAnimal.h"

class Bebek : public EggProducingFarmAnimal, public MeatProducingFarmAnimal, public Renderable {
    /* Bebek : kelas ini merepresentasikan kelas rill Bebek */
    //KONSTRUKTOR
    Bebek(Point lokasi, string nama, string suara, int lapar);
    
    //RENDER
    char render();

    //PRODUCTION
    FarmProduct produceEgg();
    FarmProduct produceMeat();
};
#endif
#ifndef AYAM_H
#define AYAM_H

#include "../Product/FarmProduct/TelurAyam.h"
#include "../Product/FarmProduct/DagingAyam.h"
#include "EggProducingFarmAnimal.h"
#include "MeatProducingFarmAnimal.h"

class Ayam : public EggProducingFarmAnimal, public MeatProducingFarmAnimal, public Renderable {
    /* Ayam : kelas ini merepresentasikan kelas rill Ayam */
    //KONSTRUKTOR
    Ayam(Point lokasi, string nama, string suara, int lapar);
    char render();
    
};
#endif
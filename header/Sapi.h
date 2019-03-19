#ifndef SAPI_H
#define SAPI_H

#include "MilkProducingFarmAnimal.h"
#include "MeatProducingFarmAnimal.h"

class Sapi : public MilkProducingFarmAnimal, public MeatProducingFarmAnimal, public Renderable {
    //KONSTRUKTOR
    Sapi(Point lokasi, string nama, int lapar);
    char render();
};
#endif
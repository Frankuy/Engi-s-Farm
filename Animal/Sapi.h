#ifndef SAPI_H
#define SAPI_H

#include "../Product/FarmProduct/SusuSapi.h"
#include "../Product/FarmProduct/DagingSapi.h"
#include "MilkProducingFarmAnimal.h"
#include "MeatProducingFarmAnimal.h"

class Sapi : public MilkProducingFarmAnimal, public MeatProducingFarmAnimal, public Renderable {
    //KONSTRUKTOR
    Sapi(Point lokasi, string nama, string suara, int lapar);
    char render();
};
#endif
#ifndef KUDA_H
#define KUDA_H

#include "../Product/FarmProduct/SusuKuda.h"
#include "MilkProducingFarmAnimal.h"

class Kuda : public MilkProducingFarmAnimal, public Renderable {
    /* Kuda : kelas ini merepresentasikan kelas rill Kuda */
    //KONSTRUKTOR
    Kuda(Point lokasi, string nama, string suara, int lapar);
    char render();
};
#endif
#include <iostream>
#include "FarmAnimal.h"
#include "FarmProduct.h"
#include <string>
using namespace std;

class MilkProducingFarmAnimal : public FarmAnimal {
    protected:
        bool ableProduceMilk; //apakah hewan sudah bisa memproduksi susu atau tidak.
                              //tergantung status lapar dan produknya sudah diambil atau belum

    public:
        //KONSTRUKTOR
        MilkProducingFarmAnimal(Point, string, string, int);

        //SETTER AND GETTER
        void setAbleProduceMilk();
        bool getAbleProduceMilk();

        //METHOD
        FarmProduct produce();
};
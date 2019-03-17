#include <iostream>
#include "FarmAnimal.h"
#include "FarmProduct.h"
#include <string>
using namespace std;

class MeatProducingFarmAnimal : public FarmAnimal {
    protected:
        bool ableProduceMeat; //apakah hewan sudah bisa memproduksi daging atau tidak.
                              //tergantung status lapar dan produknya sudah diambil atau belum

    public:
        //KONSTRUKTOR
        MeatProducingFarmAnimal(Point, string, string, int);
        
        //SETTER AND GETTER
        void setAbleProduceMeat();
        bool getAbleProduceMeat();
        
        //METHOD
        FarmProduct produce();
};
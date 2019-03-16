#include <iostream>
#include "FarmAnimal.h"
#include "FarmProduct.h"
#include <string>
using namespace std;

class MilkProducingFarmAnimal : public FarmAnimal {
    public:
        MilkProducingFarmAnimal(Point, string, string, int);
        FarmProduct produce();
};
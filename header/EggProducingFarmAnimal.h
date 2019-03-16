#include <iostream>
#include "FarmAnimal.h"
#include "FarmProduct.h"
#include <string>
using namespace std;

class EggProducingFarmAnimal : public FarmAnimal {
    public:
        EggProducingFarmAnimal(Point, string, string, int);
        FarmProduct produce();
};
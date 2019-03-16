#include <iostream>
#include "FarmAnimal.h"
#include "FarmProduct.h"
#include <string>
using namespace std;

class MeatProducingFarmAnimal : public FarmAnimal {
    public:
        MeatProducingFarmAnimal(Point, string, string, int);
        FarmProduct produce();
};
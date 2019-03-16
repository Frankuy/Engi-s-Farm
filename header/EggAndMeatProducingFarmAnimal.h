#include <iostream>
#include <string>
#include "EggProducingFarmAnimal.h"
#include "MeatProducingFarmAnimal.h"
using namespace std;

class EggAndMeatProducingFarmAnimal : public EggProducingFarmAnimal, public MeatProducingFarmAnimal {
    public:
        EggAndMeatProducingFarmAnimal(Point, string, string, int);
};
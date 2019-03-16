#include <iostream>
#include <string>
#include "Point.h"  
#include "MeatProducingFarmAnimal.h"
#include "MilkProducingFarmAnimal.h"
using namespace std;

class MeatAndMilkProducingFarmAnimal: public MeatProducingFarmAnimal, public MilkProducingFarmAnimal {
    public: 
        MeatAndMilkProducingFarmAnimal(Point, string, string, int);   
};
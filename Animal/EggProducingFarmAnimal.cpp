#include <iostream>
#include "EggProducingFarmAnimal.h"
using namespace std;

EggProducingFarmAnimal::EggProducingFarmAnimal(Point l, string n, string s, int wl): FarmAnimal(l, n, s, wl){
    ableProduceEgg = true;
}

bool EggProducingFarmAnimal::getAbleProduceEgg(){
    return ableProduceEgg;
}
void EggProducingFarmAnimal::setAbleProduceEgg(bool b){
    ableProduceEgg = b;
}

FarmProduct EggProducingFarmAnimal::produceEgg(){
    return eggType;
}
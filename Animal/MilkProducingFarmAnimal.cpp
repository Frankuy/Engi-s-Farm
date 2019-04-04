#include <iostream>
#include "MilkProducingFarmAnimal.h"
using namespace std;

MilkProducingFarmAnimal::MilkProducingFarmAnimal(Point l, string n, string s, int wl): FarmAnimal(l, n, s, wl){
    ableProduceMilk = true;
}

bool MilkProducingFarmAnimal::getAbleProduceMilk(){
    return ableProduceMilk;
}
void MilkProducingFarmAnimal::setAbleProduceMilk(bool b){
    ableProduceMilk = b;
}

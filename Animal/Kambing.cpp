#include <iostream>
#include "Kambing.h"
using namespace std;

Kambing::Kambing(Point lokasi, string nama, string suara, int lapar ):  MilkProducingFarmAnimal(lokasi, nama, suara, lapar), MeatProducingFarmAnimal(lokasi, nama, suara, lapar){
    DagingKambing d;
    SusuKambing s;
    meatType = d;
    milkType = s;
}

char Kambing::render(){
    return 'g';
}
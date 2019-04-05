#include <iostream>
#include "Domba.h"
using namespace std;

Domba::Domba(Point lokasi, string nama, string suara, int lapar ):  MilkProducingFarmAnimal(lokasi, nama, suara, lapar), MeatProducingFarmAnimal(lokasi, nama, suara, lapar){
    DagingDomba d;
    SusuDomba s;
    milkType = s;
    meatType = d;
    id = "Animal";
}

char Domba::render(){
    return 'd';
}
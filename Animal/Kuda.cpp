#include <iostream>
#include "Kuda.h"
using namespace std;

Kuda::Kuda(Point lokasi, string nama, string suara, int lapar ):  MilkProducingFarmAnimal(lokasi, nama, suara, lapar){
    SusuKuda s;
    milkType = s;
    id = "Animal";
}

char Kuda::render(){
    return 'h';
}
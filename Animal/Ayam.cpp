#include <iostream>
#include "Ayam.h"
using namespace std;

Ayam::Ayam(Point lokasi, string nama, string suara, int lapar ):  EggProducingFarmAnimal(lokasi, nama, suara, lapar), MeatProducingFarmAnimal(lokasi, nama, suara, lapar){

}

char Ayam::render(){
    return 'a';
}

FarmProduct Ayam::produceEgg(){
    
}
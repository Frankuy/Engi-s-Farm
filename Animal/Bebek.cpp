#include <iostream>
#include "Bebek.h"
using namespace std;

Bebek::Bebek(Point lokasi, string nama, string suara, int lapar ):  EggProducingFarmAnimal(lokasi, nama, suara, lapar), MeatProducingFarmAnimal(lokasi, nama, suara, lapar){

}

char Bebek::render(){
    return 'b';
}
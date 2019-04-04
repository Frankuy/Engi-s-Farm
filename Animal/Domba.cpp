#include <iostream>
#include "Domba.h"
using namespace std;

Domba::Domba(Point lokasi, string nama, string suara, int lapar ):  MilkProducingFarmAnimal(lokasi, nama, suara, lapar), MeatProducingFarmAnimal(lokasi, nama, suara, lapar){

}

char Domba::render(){
    return 'd';
}
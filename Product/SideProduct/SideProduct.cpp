#include "SideProduct.h"

SideProduct::SideProduct(string name, int price): Product(name, price){
}

int SideProduct::getNbMaterial(){
    return requirements.size();
}

string SideProduct::getMaterialN(int n){
    return requirements[n];
}

void SideProduct::printRecipe(){
  for (vector<string>::iterator it = requirements.begin(); it != requirements.end(); ++it)
    cout << " -" << *it;
  cout << '\n';
}
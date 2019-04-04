#ifndef SIDEPRODUCT_H
#define SIDEPRODUCT_H

#include <iostream>
#include <string>
#include <vector>
#include "../Product.h"
#include "../../Player/Player.h"

using namespace std;

class SideProduct : public Product{
    protected:
        vector<string> requirements;
    public:
    // Constructor
        SideProduct(string name, int price);
    // Setter & getter
        int getNbMaterial();
        string getMaterialN(int n);
    // Print
        void printRecipe();
};
#endif
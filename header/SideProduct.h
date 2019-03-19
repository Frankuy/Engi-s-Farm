#include <iostream>
#include <string>
#include "Product.h"
#include "Player.h"
using namespace std;

class SideProduct : public Product{
    protected:
        string *requirements;
        int n_Material;
    public:
    /* Jika ingin membuat SideProduct, uruttan langkahnya:
            - Create new object "SideProduct prod;"
            - Ask if obtainable "if (prod.obtainable())" 
            - Assign prod with a new object "prod = new SideProduct(*this)"*/
        SideProduct(Player user);
        SideProduct& operator =(SideProduct input);
        bool obtainable(Player user);
    // Setter & getter
        int getNbMaterial();
        string getMaterialN(int n);
};

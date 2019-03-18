#include <iostream>
#include <string>
#include "Product.h"
#include "Player.h"
using namespace std;

class SideProduct : public Product{
    private:
        string *requirements;
    public:
    /* Jika ingin membuat SideProduct, uruttan langkahnya:
            - Create new object "SideProduct prod;"
            - Ask if obtainable "if (prod.obtainable())" 
            - Assign prod with a new object "prod = new SideProduct(*this)"*/
        SideProduct(Player user);
        SideProduct& operator =(SideProduct input);
        bool obtainable(Player user);
};
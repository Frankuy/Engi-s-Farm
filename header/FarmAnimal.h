#include <iostream>
#include <string>
using namespace std;

class FarmAnimal {
    protected:
        Point lokasi;
        string nama;
        string suara;

    public:
        //KONSTRUKTOR
        FarmAnimal(Point, nama, suara);
        
        void gerak();
        void bersuara();
};
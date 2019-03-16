#include <iostream>
#include <string>
using namespace std;

class FarmAnimal {
    protected:
        Point lokasi;
        string nama;
        string suara;
        int waktuLapar;
        bool lapar;

    public:
        //KONSTRUKTOR
        FarmAnimal(Point, string, string); 
        
        void gerak();
        void bersuara();
        void mati();
        void makan();
};
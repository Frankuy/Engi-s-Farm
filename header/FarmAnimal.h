#include <iostream>
#include <string>
#include "Point.h"
using namespace std;

class FarmAnimal {
    protected:
        Point lokasi;
        string nama;
        string suara;
        const int waktuLapar;
        bool lapar;
        bool produceAble;

    public:
        //KONSTRUKTOR
        FarmAnimal(Point, string, string, int, bool, bool); 
        
        void gerak();
        void bersuara();
        void mati();
        void makan();
};
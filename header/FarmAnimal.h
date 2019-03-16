#include <iostream>
#include <string>
#include "Point.h"
#include "FarmProduct.h"
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
        FarmAnimal(Point, string, string, int); 
        
        //SETTER AND GETTER
        void setPoint(Point);
        void setNama(string);
        void setSuara(string);
        void setLapar();
        void setProduceAble();

        Point getPoint() const;
        string getNama() const;
        string getSuara() const;
        bool getLapar() const;
        bool getProduceAble() const;

        //METHODS
        void gerak();
        void bersuara();
        void mati();
        void makan();
        virtual FarmProduct produce() = 0;
};
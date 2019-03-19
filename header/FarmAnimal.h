#include <iostream>
#include <string>
#include "Point.h"
#include "FarmProduct.h"
#include "Renderable.h"
using namespace std;

#ifndef FARMANIMAL_H
#define FARMANIMAL_H
class FarmAnimal{
    protected:
        Point lokasi; //lokasi hewan
        string nama; //nama hewan
        string suara; //suara hewan
        const int waktuLapar; //periode lapar hewan. Misal, tiap 5 tick lapar
        bool lapar; //apakah hewan lapar atau tidak

    public:
        //KONSTRUKTOR
        FarmAnimal(Point, string, string, int); 
        virtual ~FarmAnimal();
        
        //SETTER AND GETTER
        void setLokasi(Point);
        void setNama(string);
        void setSuara(string);
        void setLapar(bool);

        Point getLokasi() const;
        string getNama() const;
        string getSuara() const;
        bool getLapar() const;

        //METHODS
        virtual void gerak(); //menggerakkan hewan, mengubah posisi hewan
        virtual void bersuara(); //mengeluarkan suara berupa cetakan ke terminal
        virtual void mati(); //destruct hewan
        virtual void makan(); //makan rumput, mengubah status lapar
        virtual FarmProduct produce() = 0; //Memproduce sesuatu sesuai kapabilitas hewannya
};
#endif
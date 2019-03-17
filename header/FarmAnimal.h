#include <iostream>
#include <string>
#include "Point.h"
#include "FarmProduct.h"
using namespace std;

class FarmAnimal {
    protected:
        Point lokasi; //lokasi hewan
        string nama; //nama hewan
        string suara; //suara hewan
        const int waktuLapar; //periode lapar hewan. Misal, tiap 5 tick lapar
        bool lapar; //apakah hewan lapar atau tidak

    public:
        //KONSTRUKTOR
        FarmAnimal(Point, string, string, int); 
        ~FarmAnimal();
        
        //SETTER AND GETTER
        void setPoint(Point);
        void setNama(string);
        void setSuara(string);
        void setLapar();

        Point getPoint() const;
        string getNama() const;
        string getSuara() const;
        bool getLapar() const;

        //METHODS
        void gerak(); //menggerakkan hewan, mengubah posisi hewan
        void bersuara(); //mengeluarkan suara berupa cetakan ke terminal
        void mati(); //destruct hewan
        void makan(); //makan rumput, mengubah status lapar
        virtual FarmProduct produce() = 0; //produksi FarmProduct, berbeda tiap jenis hewan
};
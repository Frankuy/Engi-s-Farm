#include <iostream>
#include <string>
#include "../Animal/FarmAnimal.h"
#include "../Cell/Facility/Facility.h"
#include "../Cell/Cell.h"
#include "../Product/Product.h"
#include "../Product/FarmProduct/FarmProduct.h"
#include "../Point.h"
#include "../Cell/Facility/Well.h"
#include "../Cell/Facility/Truck.h"
#include "../Cell/Land/Land.h"
#include "../Animal/MilkProducingFarmAnimal.h"
#include "../Animal/EggProducingFarmAnimal.h"
#include "../Animal/MeatProducingFarmAnimal.h"
#include "../Renderable.h"
#include "../LinkedList.h"
using namespace std;

#ifndef PLAYER_H
#define PLAYER_H
class Player : public Renderable {
    /* PLAYER : Kelas yang menyatakan player yang memainkan permainan. */
    private:
        int ember; //Menyimpan jumlah air saat ini dalam satuan liter
        LinkedList<Product> tas; //Menyimpan product-product
        int neffTas; //N efektif dari tas
        const int kapasitasEmber; //Kapasitas maksimum dari Ember dalam menampung air
        const int kapasitasTas; //Kapasitas maksimum dari Tas dalam menampung Product
        Point lokasi; //Menampung lokasi player saat ini
        int uang; //Jumlah uang yang didapatkan
    
    public:
        //KONSTRUKTOR DEFAULT
        Player();
            //ember = 0; tas = kosong; kapasitasTas = 10; kapasitasember = 6 (Liter); lokasi = 0,0; uang = 0

        //GETTER AND SETTER
        int getEmber() const; 
            //Mengembalikkan air yang ditampung ember saat ini
        int getNeffTas() const; 
            //Mengembalikkan jumlah product dalam tas
        int getKapasitasTas() const; 
            //Mengembalikkan kapasitas maksimum dari tas
        int getKapasitasEmber() const; 
            //Mengembalikkan kapasitas maksimum dari ember
        Point getLokasi() const; 
            //Mengembalikkan Point dari Lokasi Player saat ini
        Product getProduct(int) const; 
            //Mengembalikkan Product ke-i dari tas, sekaligus mengurangi neff (mengeluarkan nya dari tas)
        int getUang() const; 
            //Mengembalikkan jumlah uang yang player punya

        void setNeffTas(int); 
            //Mengubah neff dari tas
        void setTas(bool input, Product); 
            //Menambahkan Product ke tas jika input true, mengeluarkan Product dari tas jika input false
        void setEmber(int); 
            //Mengubah jumlah air dalam ember
        void setLokasi(Point); 
            //Mengubah lokasi dari player saat ini
        void setUang(int); 
            //Mengubah jumlah uang

        //METHODD
        void talk(FarmAnimal&); 
            //Berbicara dengan hewan penghasil Daging
        void interact(FarmAnimal&); 
            //Berinteraksi dengan hewan untuk mendapatkan FarmProduct
        void interact(Well); 
            //Interaksi dengan well
        void interact(Truck); 
            //Interaksi dengan truck 
        void kill(MeatProducingFarmAnimal&); 
            //Menyembelih hewan yang dapat menghasilkan daging
        void grow(Land&); 
            //Menumbuhkan rumput pada Land
        void mix(Cell&); 
            //Menggunakan mixers
        void gerak(int); 
            //Bergerak pada cell selama di petak tidak ada Hewan
        char render(); 
            //Mengembalikkan representasi objek Player 'P' untuk dicetak pada terminal
};
#endif
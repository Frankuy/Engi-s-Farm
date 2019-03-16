#include <iostream>
#include <string>
using namespace std;

class Player {
    private:
        int ember; //Menyimpan jumlah air saat ini dalam satuan liter
        Product* tas; //Menyimpan product-product
        int neffTas; //N efektif dari tas
        const int kapasitasEmber; //Kapasitas maksimum dari Ember dalam menampung air
        const int kapasitasTas; //Kapasitas maksimum dari Tas dalam menampung Product
        Point lokasi; //Menampung lokasi player saat ini
    public:
        //KONSTRUKTOR DEFAULT - ember = 0; tas = kosong; kapasitasTas = 10; kapasitasember = 6 (Liter); lokasi = 0,0
        Player();

        //GETTER AND SETTER
        int getEmber() const; //Mengembalikkan air yang ditampung ember saat ini
        int getNeffTas() const; //Mengembalikkan jumlah product dalam tas
        int getKapasitasTas() const; //Mengembalikkan kapasitas maksimum dari tas
        int getKapasitasEmber() const; //Mengembalikkan kapasitas maksimum dari ember
        Point getLokasi() const; //Mengembalikkan Point dari Lokasi Player saat ini
        Product getProduct(int); //Mengembalikkan Product ke-i dari tas, sekaligus mengurangi neff (mengeluarkan nya dari tas)

        void setNeffTas(int); //Mengubah neff dari tas
        void setTas(int, Product); //Mengubah isi tas
        void setEmber(int); //Mengubah jumlah air dalam ember
        void setLokasi(Point); //Mengubah lokasi dari player saat ini

        //METHODd
        void talk(FarmAnimal); //Berbicara dengan hewan
        void interact(FarmAnimal); //Interaksi dengan FarmAnimal
        void interact(Facility); //Interaksi dengna fasiltas
        void kill(MeatAnimal); //Menyembeli hewan yang dapat menghasilkan daging
        void grow(Land); //Menumbuhkan rumput pada Land
        void mix(FarmProduct, FarmProduct); //Mencampur dua FarmPrdouct
};
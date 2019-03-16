#include <iostream>
#include <string>
using namespace std;

class Product {
    protected:
        string nama;
        int harga;
    public:
        //KONSTRUKTOR
        Product(string, int);

        //SETTER AND GETTER
        void setNama(string);
        void setHarga(int);
        int getHarga() const;
        string getNama() const;
};
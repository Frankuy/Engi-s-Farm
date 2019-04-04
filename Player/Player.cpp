#include "Player.h"
#include <iostream>
#include <string>
using namespace std;

//KONSTRUKTOR
Player::Player() : kapasitasEmber(6), kapasitasTas(10) {
    ember = 0;
    tas = LinkedList<Product>();
    neffTas = 0;
    uang = 0;
}

Player::Player(int e, int ke, int kt, Point l, int u) : kapasitasEmber(ke), kapasitasTas(kt) {
    ember = e;
    tas = LinkedList<Product>();
    neffTas = 0;
    uang = u;
}

//GETTER
int Player::getEmber() const{
    return ember;
}

int Player::getNeffTas() const {
    return neffTas;
}

int Player::getKapasitasTas() const {
    return kapasitasTas;
}

int Player::getKapasitasEmber() const {
    return kapasitasEmber;
}

Point Player::getLokasi() const {
    return lokasi;
}

Product Player::getProduct(int idx) const {
    return tas.get(idx);
}

int Player::getUang() const {
    return uang;
}

//SETTER
void Player::setNeffTas(int _n) {
    neffTas = _n;
}

void Player::setTas(bool input, Product p) {
    if (input) {
        if (neffTas < kapasitasTas) {
            tas.add(p);
            neffTas++;
        }
        else {
            cout << "Tas tidak cukup!" << endl;
        }
    }
    else {
        tas.remove(p);
    }
}

void Player::setEmber(int n) {
    ember = n;
}

void Player::setLokasi(Point p) {
    lokasi = p;
}

void Player::setUang(int u) {
    uang = u;
}

//USEFUL FUNTION
void Player::lihatTas() {
    Node<Product>* temp = tas.first;
    if (temp == NULL) {
        cout << "Tas Kosong" << endl;
    }
    else {
        cout << "Tas : " << endl;
        int idx = 1;
        while (temp != NULL) {
            cout << ' ' << idx++ << ' ' << temp->value;
            temp = temp->next;
        }
    }
}

void Player::status() {
    cout << "Ember : " << getEmber() << endl;
    cout << "Lokasi : " << getLokasi() << endl;
    cout << "Uang : " << getUang() << endl;
    lihatTas();
}

//METHOD
void Player::talk(FarmAnimal &a) {
    a.bersuara();
}

void Player::interact(FarmAnimal &f) {
    f.produce();
}

void Player::interact(MeatProducingFarmAnimal &m) {
    kill(m);
}

void Player::interact(Well w){
    ember += 10;
}

void Player::interact(Truck t) {
    int pendapatan = 0;
    Node<Product>* temp = tas.first;
    while (temp != NULL) {
        pendapatan += temp->value.getHarga();
        temp = temp->next;
    }
    uang += pendapatan;
}

void Player::kill(MeatProducingFarmAnimal &m) {
    //
}

void Player::grow(Land &l) {
    //
}

void Player::mix(Cell& c) {
    lihatTas();
    int tmp;
    GeprekSusu gs;
    PaketSate psa;
    PaketSteak pst;
    cout << "1. " << gs << "2. " << psa << "3. " << pst;
    cin >> tmp;
    switch (tmp)
    {
        case 1:
            bool flag = true;
            for(int i = 0; i < 2; i++){
                if (tas.find(gs.getMaterialN(i)) == -1){
                    flag = false;
                }
            }
            if (flag){
                for(int i = 0; i < 2; i++){
                    tas.remove(gs.getMaterialN(i));
                }
                tas.add(gs);
            }
            else{
                cout << "Produk tidak dapat dibuat\n";
            }
            break;
        case 2:
            bool flag = true;
            for(int i = 0; i < 3; i++){
                if (tas.find(psa.getMaterialN(i)) == -1){
                    flag = false;
                }
            }
            if (flag){
                for(int i = 0; i < 3; i++){
                    tas.remove(psa.getMaterialN(i));
                }
                tas.add(psa);
            }
            else{
                cout << "Produk tidak dapat dibuat\n";
            }
            break;
        case 3:
            bool flag = true;
            for(int i = 0; i < 2; i++){
                if (tas.find(pst.getMaterialN(i)) == -1){
                    flag = false;
                }
            }
            if (flag){
                for(int i = 0; i < 2; i++){
                    tas.remove(pst.getMaterialN(i));
                }
                tas.add(pst);
            }
            else{
                cout << "Produk tidak dapat dibuat\n";
            }
            break;
        default:
            cout << "Inputan Salah\n";
            break;
    }
}

void Player::gerak(int arah) {
    if (arah == 0) { //ATAS
        lokasi.setY(lokasi.getY() - 1);
    }
    else if (arah == 1) { //KANAN
        lokasi.setX(lokasi.getX() + 1);
    }
    else if (arah == 2) { //KIRI
        lokasi.setY(lokasi.getY() + 1);
    }
    else if (arah == 3) { //BAWAH
        lokasi.setX(lokasi.getX() - 1);
    }
}

char Player::render() {
    return 'P';
}

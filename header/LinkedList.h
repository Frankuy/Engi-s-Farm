#ifndef LINKEDLIST_H
#define LINKEDLIST_H
#include <iostream>
using namespace std;

template<class T>
class Node {
    public:
        T value;
        Node<T> *next;
};

template<class T>
class LinkedList {
    public:
        Node<T> *first;
        Node<T> *last;

        LinkedList();
        ~LinkedList();
        void add(T element); //Menambahkan elemen ke indeks terakhir
        void remove(T element); //Menghapus elemen dalam list
        bool isEmpty(); //Mengecek list kosong atau tidak
        int find(T element); //menemukan indeks elemen
        T get(int indeks); //mengembalikkan elemen pada indeks
};
#endif
#ifndef RENDERABLE_H
#define RENDERABLE_H
#include <string>
using namespace std;
class Renderable {
    //Renderable ialah Abstract Class Untuk membantu dalam menampilkan/mencetak representasi dari objek 
    public:
        string id;
        virtual char render() = 0;
};
#endif
#ifndef RENDERABLE_H
#define RENDERABLE_H
class Renderable {
    //Renderable ialah Abstract Class Untuk membantu dalam menampilkan/mencetak representasi dari objek 
    public:
        virtual char render() = 0;
};
#endif
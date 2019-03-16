#include <iostream>
#include <string>
using namespace std;

class Point {
    private:
        int x;
        int y;
    public:
        int getX();
        int getY();
        void setX(int);
        void setY(int);
};
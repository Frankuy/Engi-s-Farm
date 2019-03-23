#include <iostream>
#include <string>
using namespace std;

#ifndef POINT_H
#define POINT_H
class Point {
    private:
        int x;
        int y;
    public:
        Point(); //DEFAULT 0,0
        Point(int, int); //User Defined

        //GETTER AND SETTER
        int getX() const;
        int getY() const;
        void setX(int);
        void setY(int);

        //COUT OPERATOR
        friend ostream& operator<<(ostream& os, const Point& p);
};
#endif
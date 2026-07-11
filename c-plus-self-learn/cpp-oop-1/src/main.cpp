#include <iostream>

using namespace std;

class Point {
    double x;
    double y;

public:
    Point(double x, double y) {
        this->x = x;
        this->y = y;

        cout<<"Point constructor"<<endl;
    }
    double getX() const
    {
        return this->x;
    }

    double getY() const {
        return this->y;
    }

    Point(const Point &p) : x(p.x), y(p.y) {
        cout<<"Point copy constructor"<<endl;
    }

};


int main() {

    Point p1(1,2);
    Point p2(3,4);
    Point p3 = p2;
    cout<<"p1: "<<p1.getX()<<endl;
    cout<<"p2: "<<p2.getX()<<endl;
    cout<<"p3: "<<p3.getX()<<endl;

    return 0;
}



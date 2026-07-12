#include <cstring>
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

class Rectangle{

    double width, height;
    char *color;

    public:
        Rectangle(double w, double h, char *c) : width(w), height(h), color(c) {
            cout<<"Rectangle constructor"<<endl;
        }
        Rectangle(double w, double h) : width(w), height(h) {
            this->color = "RED";
            cout<<"Rectangle constructor with two params"<<endl;
        }

        Rectangle() {
            this->color = "RED";
            this->width = 0;
            this->height = 0;
            cout<<"Rectangle constructor"<<endl;

        }

        Rectangle& print() {
            cout<<"Rectangle print"<<endl;
            cout<<"width: "<<this->width<<endl;
            cout<<"height: "<<this->height<<endl;
            cout<<"color: "<<this->color<<endl;
            return *this;
        }

        void print2() {
            cout<<"Rectangle print2"<<endl;
            cout<<"width: "<<this->width<<endl;
            cout<<"height: "<<this->height<<endl;
        }
};


class Student {

    char *name;
    int start_year;
    int grad_year;

    public:
        //member init must be same as declaretion
        Student(char *name, int start_year,int grad_year) : name(name),start_year(start_year), grad_year(grad_year) {
            cout<<"Student constructor"<<endl;
        }

        Student(char *name, int start_year): name(name),start_year(start_year),grad_year(start_year + 4) {
            cout<<"Student constructor with 2 param"<<endl;
        }

        void print() {
            cout<<"Student print"<<endl;
            cout<<"name: "<<name<<endl;
            cout<<"start_year: "<<start_year<<endl;
            cout<<"grad_year: "<<grad_year<<endl;
        }


};



int main() {

    Point p1(1,2);
    Point p2(3,4);
    Point p3 = p2;
    cout<<"p1: "<<p1.getX()<<endl;
    cout<<"p2: "<<p2.getX()<<endl;
    cout<<"p3: "<<p3.getX()<<endl;

    Rectangle rect1(1,2,"RED");
    Rectangle rect2(2,4);
    rect1.print().print2();

    Student student1("Kavindu", 2021);

    student1.print();

    return 0;
} 



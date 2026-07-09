#include <iostream>
#include <vector>
#include <cmath>
#include <fstream>
using namespace std;


class Point {
	int x;
	int y;

	public:
		Point()
		{
			x = 0;
			y = 0;
		
			cout << "Point created at (" << x << ", " << y << ")" << endl;
		}

		Point(int x, int y)
		{
			this->x = x;
			this->y = y;
			cout << "Point created at (" << x << ", " << y << ")" << endl;
	
		}
		void display() {
			cout << "Point(" << x << ", " << y << ")" << endl;
		}

		double distanceTo(const Point &other)
		{
			return sqrt(pow(x - other.getX(),2) + pow(y - other.getY(), 2));
		}

		int getX() const {
			return this->x;
		}

		int getY() const {
			return this->y;
		}

		void setY(int y)
		{
			this->y = y;
		}

		void setX(int x)
		{
			this->x = x;
		}
		
		static void print_points(std::vector<Point> &point)
		{
			for ( auto& p : point) {
				p.display();
			}
		}

		Point operator+(const Point &pA)
		{
			return Point(this->x + pA.getX(), this->y + pA.getY());
		}

		bool operator==(const Point& re)
		{
			if (this->x == re.getX() && this->y == re.getY())
			{
				return true;
			}
			return false;
		}
};

class City {
	Point location;
	char* name;
	int population;
	 

};

class Simple
{ 

public:
	int x;

	Simple()
	{
		x = 0;
	}

};

class Heap
{
public:
	Simple* s = new Simple();

	Heap()
	{
		s->x = 10;
	}
};

class BasicNumber
{
public:
	int num;

	BasicNumber()
	{
		num = 0;
	}

	BasicNumber(int n)
	{
		num = n;
	}

	BasicNumber(const BasicNumber& other)
	{
		num = other.num;
		cout << "Copy constructor called for BasicNumber with value: " << num << endl;
	}
};


int main()
{
	std::vector<Point> points = {
 		{1, 2},
		{3, 4},
		{5, 6}
	};

	for (auto& point : points) {
		point.display();
	}
	
	Point p1;
	p1.setX(10);
	p1.setY(20);

	p1.display();

 	for (auto& point : points) {
		double distance = point.distanceTo(p1);
		cout << "Distance from Point(" << point.getX() <<", " << point.getY()<<") to Point(" << p1.getY() << ", " << p1.getY() << ") is: " << distance << endl;
	}

	for (auto& point : points) {
		point.setX(point.getX() + 1);
		point.setY(point.getY() + 1);
	}

	Point::print_points(points);

	Simple s;
	Simple sq;

	s.x = 5;
	sq.x = 10;

	s = sq;

	cout << "s.x: " << s.x << endl;
	cout << "sq.x: " << sq.x << endl;	

	Heap h1;
	Heap h2;

	cout << "h1.s->x: " << h1.s->x << endl;
	cout << "h2.s->x: " << h2.s->x << endl;

	h2.s->x = 20;

	h1 = h2;

	cout << "h1.s->x: " << h1.s->x << endl;
	cout << "h2.s->x: " << h2.s->x << endl;

	BasicNumber num(4);
	BasicNumber num2 = num;

	Point p3(1, 2);
	Point p2(123, 345);
	Point c = p1 + p3;

	c.display();

	if (p1 == p2) cout << "p1 and p2 are equal" << endl;
	else cout << "p1 and p2 are not equal" << endl;

	return 0;
}
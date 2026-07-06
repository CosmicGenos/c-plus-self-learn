#include <iostream>
#include <vector>
#include <cmath>

using namespace std;

class Point
{
	double x;
	double y;

public:
	Point()
	{
		x = 0;
		y = 0;

		cout << "Point created at (" << x << ", " << y << ")" << endl;
	}

	Point(double x, double y)
	{
		this->x = x;
		this->y = y;
		cout << "Point created at (" << x << ", " << y << ")" << endl;
	}

	void display()
	{
		cout << "Point(" << x << ", " << y << ")" << endl;
	}

	double distanceTo(const Point& other)
	{
		return sqrt(pow(x - other.getX(), 2) + pow(y - other.getY(), 2));
	}

	double getX() const
	{
		return this->x;
	}

	double getY() const
	{
		return this->y;
	}

	void setY(double y)
	{
		this->y = y;
	}

	void setX(double x)
	{
		this->x = x;
	}



	double distanceToOrigin()
	{
		return sqrt(pow(x, 2) + pow(y, 2));
	}

	Point scale(double factor)
	{
		return Point(x * factor, y * factor);
	}


};

int main()
{
	Point p1(3, 4);
	Point p2(6, 8);

	cout << "Distance between p1 and p2: " << p1.distanceTo(p2) << endl;
	cout << "Distance from p1 to origin: " << p1.distanceToOrigin() << endl;

	Point p3 = p1.scale(2);
	p3.display();

	return 0;
}
#include <iostream>
#include <vector>
#include <cmath>
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



	return 0;
}
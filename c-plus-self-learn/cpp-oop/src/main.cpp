#include <iostream>
#include <vector>
#include <cmath>
using namespace std;


class Point {
public:
	int x;
	int y;
	
	void display() {
		cout << "Point(" << x << ", " << y << ")" << endl;
	}

	double distanceTo(const Point &other)
	{
		return sqrt(pow(x - other.x, 2) + pow(y - other.y, 2));
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
	p1.x = 10;
	p1.y = 20;

	p1.display();

	for (auto& point : points) {
		double distance = point.distanceTo(p1);
		cout << "Distance from Point(" << point.x << ", " << point.y << ") to Point(" << p1.x << ", " << p1.y << ") is: " << distance << endl;
	}

	return 0;
}
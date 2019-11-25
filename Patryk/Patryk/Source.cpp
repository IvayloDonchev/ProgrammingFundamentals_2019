#define _USE_MATH_DEFINES
#include <iostream>
#include <string>

using namespace std;

class Point
{
private:
	double x;
	double y;
public:
	
	Point() : x(0.0), y(0.0)
	{}

	Point(double a, double b) : x(a), y(b)
	{}

	~Point()
	{}

	void Show() const
	{
		cout << '(' << x << ',' << y << ')';
	}

	void ReadData()
	{
		cout << "Enter X of point: ";
		cin >> x;
		cout << "Enter Y of point: ";
		cin >> y;
	}
};

class Circle
{
private:
	Point center;
	string color;
	double radius;
public:
	Circle() : center(0.0, 0.0), color("Black"), radius(0.0)
	{}

	Circle(Point center, string color, double radius) :
		center(center), color(color), radius(radius)
	{}

	~Circle()
	{}

	double getArea() const
	{
		return M_PI * radius * radius;
	}

	double getDiameter() const
	{
		return 2 * radius;
	}

	void Show() const
	{
		cout << color << " circle with center point ";
		center.Show();
		cout << " and radius " << radius << endl;
		cout << "Area: " << getArea() << endl;
		cout << "Diameter: " << getDiameter() << endl;
	}
};

int main()
{
	Circle c1{ Point(5,8), "Red", 10 }, c2{ Point(0,5), "Green", 6 };
	c1.Show();
	cout << endl;
	c2.Show();
	
	return 0;
}

//Implement the classes from the attached diagram.
//
//The methods getDiameter() and getArea() should calculate and return the diameter and 
//the area of the circle, respectively.
//
//Both methods Show() shows on the screen information about the object (point or circle).
//
//In the main() function, define two objects of the class Circle and initialize them with concrete data.
//Then show them on the screen.


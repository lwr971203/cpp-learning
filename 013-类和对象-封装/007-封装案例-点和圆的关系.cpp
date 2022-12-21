#include <iostream>
#include "Circle.h"
#include "point.h"
#include <string>
using namespace std;

//本案例做了太多拷贝赋值了,效率低
string LocationWithCircle(Point point, Circle& circle) {
	double distanceSquare = (point.GetX() - circle.GetCenter().GetX()) * (point.GetX() - circle.GetCenter().GetX()) +
		(point.GetY() - circle.GetCenter().GetY()) * (point.GetY() - circle.GetCenter().GetY());

	double radius = circle.GetRadius();
	if (distanceSquare == radius * radius)
	{
		return "点在圆上";
	}
	else if (distanceSquare < radius * radius)
	{
		return "点在圆内";
	}
	else
	{
		return "点在圆外";
	}
}

int main() {
	Circle circle;
	circle.SetRadius(10);
	Point center;
	center.SetX(0);
	center.SetY(0);
	circle.SetCenter(center);

	Point point;
	point.SetX(10);
	point.SetY(11);
	string msg = LocationWithCircle(point, circle);
	cout << msg << endl;
	point.SetX(5);
	point.SetY(6);
	msg = LocationWithCircle(point, circle);
	cout << msg << endl;
	point.SetX(10);
	point.SetY(0);
	msg = LocationWithCircle(point, circle);
	cout << msg << endl;
}
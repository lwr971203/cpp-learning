#pragma once
#include <iostream>
#include "point.h"
using namespace std;

class Circle {
private :
	double _radius;
	Point _center;
public :
	void SetRadius(double);
	double GetRadius();
	void SetCenter(Point);
	Point GetCenter();
};

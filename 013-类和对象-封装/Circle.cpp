#include "Circle.h"

void Circle::SetRadius(double radius) {
	_radius = radius;
}

void Circle::SetCenter(Point point) {
	_center = point;
}

Point Circle::GetCenter(){
	return _center;
}

double Circle::GetRadius() {
	return _radius;
}
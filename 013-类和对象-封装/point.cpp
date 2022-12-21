#include "point.h"
#include <iostream>
using namespace std;

//源文件中不需要有类的声明，只需要有实现
void Point::SetX(double x) {
	_x = x;
}

void Point::SetY(double y) {
	_y = y;
}

double Point::GetX() {
	return _x;
}

double Point::GetY() {
	return _y;
}
#include "point.h"
#include <iostream>
using namespace std;

//Դ�ļ��в���Ҫ�����������ֻ��Ҫ��ʵ��
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
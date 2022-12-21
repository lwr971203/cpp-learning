#pragma once
#include <iostream>
using namespace std;	

//头文件中需要有声明，不需要要具体的实现
class Point {
private :
	double _x;
	double _y;
public:
	void SetX(double);
	void SetY(double);
	double GetX();
	double GetY();
};

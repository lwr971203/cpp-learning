#pragma once
#include <iostream>
using namespace std;	

//ͷ�ļ�����Ҫ������������ҪҪ�����ʵ��
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

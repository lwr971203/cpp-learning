#include <iostream>
using namespace std;

//函数的重载要求在同一个作用域下，函数名相同，函数签名(包括函数名和形参列表)不同。
void Func() {
	cout << "I am Func()" << endl;
}

void Func(int a) {
	cout << "I am Func(int a)" << endl;
}

void Func(double a) {
	cout << "I am Func(double a)" << endl;
}

void Func(double a, int b) {
	cout << "I am Func(double a,int b)" << endl;
}

void Func(int a, double b) {
	cout << "I am Func(int a,double b)" << endl;
}

//注：若仅仅只有返回值不同，无法重载（编译错误），因为有歧义
//int Func(double a) {
//
//}

int main() {
	Func();
	Func(1);
	Func(2.5);
	Func(1.5,10);
	Func(1,10.2);
}
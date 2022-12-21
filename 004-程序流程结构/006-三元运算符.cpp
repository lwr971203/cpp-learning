#include <iostream>
using namespace std;

int main() {
	//计算数最大值
	int i1 = 10;
	int i2 = 20;
	int i3 = 0;
	i3 = i1 > i2 ? i1 : i2;
	cout << "两数中最大值为:" << i3 << endl;

	//在C++中三元运算符可以返回变量并且给它赋值
	(i1 > i2 ? i1 : i2) = 100;
	cout << "i1:" << i1 << endl; //10
	cout << "i2:" << i2 << endl; //100
}
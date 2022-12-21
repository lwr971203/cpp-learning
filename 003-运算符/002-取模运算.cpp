#include <iostream>
using namespace std;

int main() {
	int i1 = 10; 
	int i2 = 3;
	cout << "i1%i2=" << i1 % i2 << endl;

	//取模取不动的时候，就是它自己本身
	int i3 = 5;
	int i4 = 6;
	cout << "i3 % i4 = " << i3 % i4 << endl;

	//取模依然不能对0
	int i5=7;
	//i5 = i5 % 0; //直接报错

	//小数不能取模
	double d1 = 2.5;
	double d2 = 0.6;
	//cout << d1 % d2 << endl; //编译错误
}
#include <iostream>
using namespace std;

int main(){
	int i1 = 10;
	int i2 = 3;
	cout << "i1+i2:" << i1 + i2 << endl;
	cout << "i1-i2:" << i1 - i2 << endl;
	cout << "i1*i2:" << i1 * i2 << endl;
	cout << "i1/i2:" << i1 / i2 << endl;

	//除数不能为0
	//cout << "i1/0:" << i1 / 0 << endl; //直接报错

	//小数运算还是小数
	double d1 = 5;
	double d2 = 1.5;
	cout << "d1/d2:" << d1 / d2 << endl;
}
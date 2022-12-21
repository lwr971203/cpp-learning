#include	<iostream>
using namespace std;

int main() {
	int a = 10;
	a += 2;
	cout << "a+=2 : " << a << endl;

	a = 10;
	a -= 2;
	cout << "a-=2 : " << a << endl;

	a = 10;
	a *= 2;
	cout << "a*=2 : " << a << endl;

	a = 10;
	a /= 2;
	cout << "a/=2 : " << a << endl;

	a = 10;
	a %= 2;
	cout << "a%=2 : " << a << endl;

	//注:C++延续C有位运算的复合赋值
}
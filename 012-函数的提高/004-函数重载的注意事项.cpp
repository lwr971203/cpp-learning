#include <iostream>
using namespace std;

void Func(int& a) {
	cout << "Func(int &a)" << endl;
}

//const也可以作为重载的条件
void Func(const int& a) {
	cout << "Func(const int &a)" << endl;
}

void Func1(int a) {
	cout << "Func1(int a)" << endl;
}

void Func1(int a, int b = 10) {
	cout << "Func1(int a ,b=10)" << endl;
}

int main() {
	int a = 10;
	Func(a); //默认调用第一个，因为a本身是可写的，所以优先调用第一个
	Func(10); //只能调用第二个，因为第一个赋值不合法


	//Func1(10); //调用出现歧义，编译都过不去
	Func1(10, 20); //此时不会出现歧义
	return 0;
}
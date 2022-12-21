#include <iostream>
using namespace std;

//引用参数
void Swap(int& a, int& b) {
	int temp = a;
	a = b;
	b = temp;
}

int main() {
	int a = 10;
	int b = 30;

	Swap(a, b);

	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
}
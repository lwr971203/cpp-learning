#include <iostream>
using namespace std;

//���ò���
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
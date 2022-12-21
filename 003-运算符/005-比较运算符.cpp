#include <iostream>
using namespace std;

int main() {
	int i1 = 10;
	int i2 = 20;

	cout << (i1 == i2) << endl; //这里有个左移运算，所以需要将他们括号起来优先运算
	cout << (i1 != i2) << endl;
	cout << (i1 < i2) << endl;
	cout << (i1 > i2) << endl;
	cout << (i1 <= i2) << endl;
	cout << (i1 >= i2) << endl;
	
}
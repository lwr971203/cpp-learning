#include <iostream>
using namespace std;

int main() {
	int i1 = 10;
	int i2 = 5;
	cout << (i1 || i2) << endl; //i1

	i1 = 0;
	cout << (i1 || i2) << endl; //1	

	i2 = 0;
	cout << (i1 || i2) << endl; //0
}
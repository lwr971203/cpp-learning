#include <iostream>
using namespace std;
void Swop(int num1,int num2){
	int temp = num1;
	num1 = num2;
	num2 = temp;

	cout << "num1:" << num1 << endl;
	cout << "num2:" << num2 << endl;
}

int main() {
	int num1 = 10;
	int num2 = 60;

	cout << "num1:" << num1 << endl;
	cout << "num2:" << num2 << endl;

	Swop(num1, num2);

	cout << "num1:" << num1 << endl;
	cout << "num2:" << num2 << endl;
}
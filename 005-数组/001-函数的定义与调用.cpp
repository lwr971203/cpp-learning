#include <iostream>
using namespace std;

//定义一个函数
int Add(int num1,int num2) {
	return num1 + num2;
}

int main() {
	int num1 = 10;
	int num2 = 20;
	int sum = Add(num1,num2);
	cout << sum << endl;

	sum = Add(50, 70);
	cout << sum << endl;
}
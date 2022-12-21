#include <iostream>
using namespace std;

#define Day 7 //不用加冒号

int main() {
	cout << "一周总共有:" << Day <<"天"<< endl;

	//C++中还可以定义局部常量
	const int month = 12;
	cout << "一年总共有:" << month << "月" << endl;
	//month = 13;  // 常量不可修改
	system("pause");
	return 0;
}
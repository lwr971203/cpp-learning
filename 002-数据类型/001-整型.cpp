#include <iostream>
using namespace std;

int main() {
	//短整型 2个字节
	short num1 = 32768; //超出范围变成-32768  与计算机的补码存储方式有关

	//整型 4个字节
	int num2 = 32768;

	//长整型 8个字节（64位程序在window） linux中是4个字节  4个字节（32位程序在window）
	long num3 = 10;

	//长长整型 8个字节
	long long num4 = 41654641641;

	cout << num1 << endl;
	cout << num2 << endl;
	cout << num3 << endl;
	cout << num4 << endl;

	//注:C++一样具有类型提升，char short 在依旧是往int提升 . C++中没有byte类型
}
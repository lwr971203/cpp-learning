#include <iostream>
using namespace std;

int main() {
	int num1 = 1;
	short num2 = 1;
	long num3 = 1;
	long long num4 = 1;

	//sizeof关键字可以放类型或者是变量
	cout << "int 类型所占用的内存空间为:" << sizeof(int) << endl; //可以直接给定数据类型   int 为4个字节
	cout << "int 类型所占用的内存空间为:" << sizeof(num1) << endl; // 可以给定变量
	//注当用sizeof不使用括号的时候,只能接变量
	cout << "int 类型所占用的内存空间为:" << sizeof num1<<endl;

	cout << "short 类型所占用的内存空间为:" << sizeof(short) << endl;  // 两个字节大小
	cout << "long 类型所占用的内存空间为:" << sizeof(long) << endl; //这里是个奇葩 C++里long类型是占用4个字节
	cout << "long long 类型所占用的内存空间为:" << sizeof(long long) << endl; // long long类型占用8个

}
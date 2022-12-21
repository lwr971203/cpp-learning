#include <iostream>
using namespace std;

int main() {
	//在C++中非0为true ，0 为false，延续C风格
	bool b1 = true;
	cout << "布尔类型true在C++中的值=" << b1 << endl; //输出为1

	bool b2 = false;
	cout << "布尔类型false在C++中的值=" << b2 << endl; //输出为0

	//bool在内存中的大小
	cout << "布尔类型在内存中的大小=" << sizeof(bool) << endl; //1个字节
}
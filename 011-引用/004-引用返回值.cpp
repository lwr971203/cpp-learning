#include <iostream>
using namespace std;
//1、不要返回局部实例的引用
int& Test1() {
	int a = 10;
	return a;
}

//2、引用返回值能作为左值(牛...)
int& Test2() {
	static int a = 10; //静态局部变量是存在全局区的，在程序结束时释放
	return a;
}
int main() {
	int& ref = Test1();
	cout << ref << endl;
	cout << ref << endl; //还是那个问题，局部实例被释放了，值错乱

	int& ref2 = Test2();
	cout << ref2 << endl; //10
	Test2() = 1000;
	cout << ref2 << endl; //1000
}
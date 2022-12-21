#include <iostream>
using namespace std;
//2、常量引用参数
void Print(const int& a) {
	//a = 1000; //禁止修改
	cout << "a=" << a << endl;
}

int main() {
	//1、局部常量引用
	//int& ref = 10; //不可以引用一个字面量(全局区)，不仅是字面量,临时实例(也在全局区)也不行
	const int& ref = 10; //此时可以，因为编译器背后自动做了优化.int temp = 10 ; const int& ref = temp;
	//注: 加了const修饰不可修改,类似常量指针常量
	int a = 100;
	Print(100);
}
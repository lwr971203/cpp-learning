#include <iostream>
using namespace std;

int main() {
	//引用就是给变量起别名，即一块内存实例可以有多个变量名（标识符）来表示
	//引用的内部实现是一个指针常量,故声明时必须初始化
	int a = 10;
	int& b = a;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;

	b = 20;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
}
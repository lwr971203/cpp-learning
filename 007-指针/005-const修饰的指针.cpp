#include <iostream>
using namespace std;

int main() {
	int a = 10;
	int b = 20;

	//常量指针：指向随便改。指向的实例只读不写.(不可修改实例及其成员)
	const int* p = &a; //注:可以乱指,这里可以不声明的时候初始化
	p = &b; //可以
	//*p = b;	 //编译错误
	cout << *p << endl;

	//指针常量：指向不可改,指向的实例可读可写
	int* const x = &a; //因为它不能乱指,所以必须声明的时候就初始化
	*x = 20;
	cout << a << endl;
	cout << *x << endl;
	//x = &b; //编译错误


	//常量指针常量(最严格): 指向不可改,且指向的实例只读不写(不可修改实例及其成员)
	const int* const y = &a; //同样的,因为它不能乱指,所以必须声明的时候就初始化
	cout << *y << endl;
}
#include <iostream>
using namespace std;

int main() {
	//定义一个空指针,可以指向,但不可访问与赋值
	int* p = NULL; //指向了地址位0的地方
	//0~255的地址是系统的，不允许操作
	//*p = 100; //直接报错，权限不允许
	//试图访问值
	//cout << "*p的值:" << *p << endl; //直接报错，权限不允许
}
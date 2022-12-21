#include <iostream>
using namespace std;

int main() {
	int a = 10; //c++中声明变量(非指针变量)就是一个内存实例,在栈区开辟(非new)
	//声明并初始化一个指针变量，指针本质上就是存一个地址(通常说指向该内存实例)
	int *p = &a; //拿到a的地址  只有在声明指针变量的时候加*  其余时候p就是指针变量,再次加*变*p表示解引用(取到指针所指向的内存实例)
	cout << "a的地址:" << &a << endl;
	cout << "指针p存的地址:" << p << endl;

	//通过解引用的方式拿到指针对应地址的内存实例
	cout << "指针指向的内存实例" << *p << endl;

	//虽然你用取址符&可以获取全局区中的地址,但指针只能指向堆栈的实例(引用也是)
	//int* intptr = &10; //错误,指向了全局区的字面值

}
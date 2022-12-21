#include <iostream>
using namespace std;	
//栈区一般就是存放局部变量/形参的区域：注意事项，不要返回栈区实例(非new)的地址.因为栈区的实例会在执行完函数体被自动释放
//例如
int* Func() {
	int a = 10;
	return &a;
}
int main() {
	int *p = Func();
	cout << *p << endl; //第一i数据正确了是因为编译器做了优化
	cout << *p << endl; //第二次数据不正确，说明栈区执行了释放

	//注：局部变量/形参的内存是由编译器自动去管理和释放的
}
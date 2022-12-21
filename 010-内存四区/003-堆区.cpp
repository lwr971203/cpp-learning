#include <iostream>
using namespace std;
//堆区的数据由程序员手动取释放，若一直未释放，则由系统在关闭程序的时候释放(容易造成内存泄露)
int* Func() {
	//使用new关键字在堆内存中开辟空间
	int* p = new int(10); //返回的是对应类型的堆实例地址
	return p;
}
int main() {
	int* p = Func();
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;
}
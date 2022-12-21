#include <iostream>
using namespace std;

class Person1 {
	//无成员
};

void Test1() {
	Person1 p1;
	cout << "size of Person1 is " << sizeof(p1) << endl;  //无成员对象在内存中占用1个字节,是c++编译器为了区分空对象的结果
}

class Person2 {
	//实例成员变量(实例字段)
	int _a;
	//成员函数(实例函数)、静态成员变量(共享)、静态成员函数(共享)全部分开存储。都只有一份  这里与C#和java一致
	void Func() {

	}
	static int _b; //不属于实例内存
	static void StaticFunc() {
		
	}
};
int Person2::_b = 10;

void Test2() {
	Person2 p2;
	cout << "size of Person2 is " << sizeof(p2) << endl;  //实例字段有多大就多大
}

int main() {
	Test1();
	Test2();
}
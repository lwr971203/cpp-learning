#include <iostream>
using namespace std;

class Person {
public:
	string name;
	int age;
};

//引用在语义完全对应实例
int main() {
	int a = 10;

	//1、引用必须初始化
	//int &b; //错误
	int& b = a; //正确

	//2、引用只会初始化一次
	int c = 20;
	b = c; //此时已经变成了赋值操作了

	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	cout << "c=" << c << endl;

	//引用只允许引用实例
	Person p0;
	Person& p0_ref = p0;

	Person p1 = Person();
	Person& p1ref = p1;

	Person* p2 = &Person();
	Person& p2_ref = *p2;

	Person* p3 = new Person();
	Person p3_ref = *p3;

	//错误示范
	Person* p4 = new Person();
	//Person& p4_ref = p4;
	/*
	1、假设存在两个重载函数,一个用参数Person一个参数用Person&,则发生冲突,编译错误
	2、虽然引用变量是指针常量的实现,但c++语义上不可接收指针,语义上应该看成实例变量.
		 但与实例变量又有点细微的区别,C++实际上会区别对待Person与Person&,认为是两种类型
	3、引用不存在拷贝构造行为
	*/
}
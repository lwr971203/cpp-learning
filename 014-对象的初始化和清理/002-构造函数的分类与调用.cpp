#include <iostream>
using namespace std;

class Person {
public:
	//按有参无参分类：无参构造函数  有参构造函数
	//按类型分类：普通构造函数 	拷贝构造函数
	Person() {//非必须品,c++默认会提供一个无参无实现的默认构造函数，若手写了一个构造函数(包括拷贝构造)则默认构造函数会销毁
		cout << "Person 对象的无参构造函数" << endl;
	}
	Person(int a) {
		cout << "Person 对象的有参构造函数" << endl;
		_age = a;
	}
	//拷贝构造函数(非必需品,c++默认提供一个拷贝构造函数,将所有字段(包括私有)拷贝,我测试过了，若手写了一个拷贝构造函数则默认拷贝构造函数会销毁
	Person(const Person& person) { //拷贝构造函数的形参必须是const引用
		cout << "Person 对象的拷贝构造函数调用" << endl;
		_age = person._age;
	}
	~Person() {
		cout << "Person 对象的析构函数调用" << endl;
	}

	int _age;
};

int main() {
	//调用方式分类：

	//1、括号法
	Person p1; //调用默认构造函数，注意不要加(),因为会认为Person p1();是局部函数的一个声明。因为从c开始就有这种局部函数的写法
	Person p2(10);
	Person p3(p2); //拷贝构造函数调用
	cout << "p3._age=" << p3._age << ",p2._age=" << p2._age << endl;

	//显式法
	//解析：Person()被认为是匿名对象，首先匿名对象被创建，然后被取名为p4.   匿名对象如果没有取名的话走完当前行直接销毁  .... 但是不需要过于关注这细节.将他们假装看成上面的括号法就行
	Person p4 = Person(); 
	Person p5 = Person(10);
	Person p6 = Person(p5); //会调用拷贝构造

	//隐式法
	Person p7 = 50; //被视为Person p7 = Person(10);
	Person p8 = p7; //被视为Person p8 = Person(p7); 会调用拷贝构造
	cout << "p8._age=" << p8._age << ",p7._age=" << p7._age << endl;
}
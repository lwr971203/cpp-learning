#include <iostream>
using namespace std;

class Person1 {
public:
	int _age;
	int* _ref;
	Person1(int age, int value) {
		_age = age;
		_ref = new int(value); //在堆区开辟内存空间
	}
	~Person1() {
		cout << "Person1的析构函数调用" << endl;
	}
};

class Person2 {
public:
	int _age;
	int* _ref;
	Person2(int age, int value) {
		_age = age;
		_ref = new int(value); //在堆区开辟内存空间
	}
	~Person2() {
		cout << "Person2的析构函数调用" << endl;
		if (_ref != NULL)
		{
			delete _ref; //释放堆内存
			_ref = NULL; //指向置空
		}
	}
};

class Person3 {
public:
	int _age;
	int* _ref;
	Person3(int age, int value) {
		_age = age;
		_ref = new int(value); //在堆区开辟内存空间
	}
	Person3(const Person3& p) {
		_age = p._age;
		_ref = new int(*p._ref);
		cout << "Person3的拷贝构造函数调用" << endl;
	}
	~Person3() {
		cout << "Person3的析构函数调用" << endl;
		if (_ref != NULL)
		{
			delete _ref; //释放堆内存
			_ref = NULL; //指向置空
		}
	}
};

int main() {
	//假设析构函数不释放堆内存空间，不会报错，但是不好
	Person1 p1(10, 100);
	Person1 p2(p1);
	cout << "p1._age=" << p1._age << ",*p1._ref=" << *p1._ref << endl;
	cout << "p2._age=" << p2._age << ",*p2._ref=" << *p2._ref << endl;

	//现在在析构函数中标准的释放堆内存空间，默认采用浅拷贝
	//Person2 p3(10,100);//此时p3出栈出问题，因为在栈中后入先出，p4先被释放，_ref指向的堆空间释放，所以p3中的_ref指针仍指向空内存，执行delete时就会报错了（重复释放）
	//Person2 p4(p3); 

	//利用自己写的拷贝构造函数提供深拷贝，就不会发生这种问题
	Person3 p5(10, 100);
	Person3 p6(p5);
	cout << "p5._age=" << p5._age << ",*p5._ref=" << *p5._ref << endl;
	cout << "p6._age=" << p6._age << ",*p6._ref=" << *p6._ref << endl;
}
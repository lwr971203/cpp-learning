#include <iostream>
using namespace std;

class Person {
public:
	int* _a;
	Person(int a) {
		_a = new int(a);
	}
	~Person() {
		if (_a != NULL)
		{
			delete _a;
			_a = NULL;
		}
	}
	Person& operator=(Person& p) {
		//C++默认的赋值运算符(拷贝函数)是浅拷贝，当对象自身字段为指针，不仅无法释放该指针指向的内存
		//还会在出现调用方出栈时,重复释放内存
		//_a = p._a; //这种方式就是默认的浅拷贝方式,直接指针存的地址拷贝过来了

		//正确的应该是深拷贝，自己单独在堆区另外开辟内存
		//先清空已存在堆内存
		if (_a != NULL)
		{
			delete _a;
		}

		_a = new int(*p._a); //把实例的数据拷贝过来而不是将实例的地址拷贝过来

		return *this;
	}
};

int main() {
	Person p1(10);
	Person p2(20);
	Person p3(30);
	p3 = p2 = p1;
	cout << "*p1._a=" << *p1._a << endl;
	cout << "*p2._a=" << *p2._a << endl;
	cout << "*p3._a=" << *p3._a << endl;
}
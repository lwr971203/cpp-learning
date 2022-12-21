#include <iostream>
using namespace std;

class Person {
public :
	int _a;
	static int _b;
	static void StaticFunc() {
		cout << "StaticFunc被调用" << endl;
		//面向对象中静态成员绝不可访问类的实例成员(只可访问类的静态成员).  除非是通过实例对象访问它的成员
		// 对于实例成员,是可以直接访问自己这个类的所有静态成员(包括private),以及父类的protected级别及以上的静态成员
		//InstanceFunc();
		//_a = 20;
		_b = 20;
	}
	void InstanceFunc() {
		cout << "InstanceFunc被调用" << endl;
	}

private :
	static void StaticPrivateFunc() {
		cout << "StaticPrivateFunc被调用" << endl;
	}
};
int Person::_b = 10;

int main() {
	Person p1;
	p1.InstanceFunc();
	p1.StaticFunc();
	Person::StaticFunc();

	//外部无法访问
	//p1.StaticPrivateFunc();
	//Person::StaticPrivateFunc();
}
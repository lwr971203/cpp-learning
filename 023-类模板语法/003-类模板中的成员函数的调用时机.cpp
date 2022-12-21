#include <iostream>
using namespace std;

class Person1 {
public:
	void Show1() {
		cout << "Person1" << endl;
	}
};

class Person2 {
public:
	void Show2() {
		cout << "Person2" << endl;
	}
};

template<typename T>
class MyClass {
public:
	T obj;
	void ShowPerson1() { //泛型类的成员函数在调用的时候才会创建，所以在编译过程不会检查
		obj.Show1();
	}
	void ShowPerson2() {
		obj.Show2();
	}
};

int main() {
	MyClass<Person1> p1;
	p1.ShowPerson1();
	//p1.ShowPerson2();
}
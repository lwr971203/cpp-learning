#include <iostream>
using namespace std;
#include <string>
template<class T1, class T2>
class Person {
public:
	T1 _name;
	T2 _age;
	Person(T1 name, T2 age);
	void Show();
};

template<class T1, class T2>
Person<T1, T2>::Person(T1 name, T2 age) {
	this->_name = name;
	this->_age = age;
}

template<class T1, class T2>
void Person<T1, T2>::Show() {
	cout << "name=" << this->_name << ",age=" << this->_age << endl;
	cout << "T1的类型为:" << typeid(_name).name() << endl;
	cout << "T2的类型为:" << typeid(_age).name() << endl;
}
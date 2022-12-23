#include <iostream>
using namespace std;
#include <string>

template<typename T1,typename T2>
class Person {
public:
	T1 _name;
	T2 _age;
	Person(T1 name, T2 age);
	void Show();
};
//类外实现成员函数
template<class T1,class T2>
Person<T1, T2>::Person(T1 name, T2 age) { //这里最前面的Person<T1,T2> 看上去是比较冗余的，但没办法别人C++硬性规定的
	this->_name = name;
	this->_age = age;
}
template<class T1, class T2>
void Person<T1, T2>::Show() {
	cout << "name=" << this->_name << ",age=" << this->_age << endl;
}

int main() {
	Person<string, int> p1("孙悟空",100);
	p1.Show();
}
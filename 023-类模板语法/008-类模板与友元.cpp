#include <iostream>
using namespace std;
#include <string>

//全局函数类外实现必须加这些傻逼代码
template<class T1,class T2>
class Person;
template<class T1,class T2>
void ShowPerson2(Person < T1, T2> &p) {
	cout << "name=" << p._name << ",age=" << p._age << endl;
}


template<class T1,class T2>
class Person {
	//全局函数做类内实现。通常只采用这种方法
	friend void ShowPerson1(Person<T1, T2> &p) { //这里的两个泛型可以理解成借这两个泛型用一下
		cout << "name=" << p._name << ",age=" << p._age << endl;
	}

	//全局函数做类外实现，极其麻烦，而且语法不合理，糟粕
	friend void ShowPerson2<>(Person < T1, T2> &p); //必须加<>，傻逼
private:
	T1 _name;
	T2 _age;
public:
	Person(T1 name,T2 age) {
		this->_name = name;
		this->_age = age;
	}
};

//测试全局函数类内实现
void Test1() {
	Person<string, int> p("孙悟空", 100);
	ShowPerson2(p);
}

//测试全局函数类外实现
void Test2() {
	Person<string, int> p("孙悟空", 100);
	ShowPerson1(p);
}

int main() {
	Test1();
	Test2();
}


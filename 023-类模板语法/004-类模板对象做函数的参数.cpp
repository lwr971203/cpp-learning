#include <iostream>
using namespace std;
#include <string>

template<typename T1, typename T2>
class Person {
public:
	T1 _name;
	T2 _age;

	Person(T1 name, T2 age) {
		this->_name = name;
		this->_age = age;
	}

	void Show() {
		cout << "name=" << this->_name << ",age=" << this->_age << endl;
	}
};

//传入指定类型,泛型类在使用的时候必须用具体类型刻画或者继续用新泛型顶替
void Test1(Person<string, int>& p) {
	p.Show();
}

//用新泛型顶替
template<typename T1, typename T2>
void Test2(Person<T1, T2>& p) {
	p.Show();
	cout << "T1的类型:" << typeid(T1).name() << endl;
	cout << "T2的类型:" << typeid(T2).name() << endl;
}

//将泛型类的具体刻画形态作为泛型
template<typename T>
void Test3(T& p) {
	p.Show();
	cout << "T的类型:" << typeid(T).name() << endl;
}

int main() {
	Person<string, int> p1("孙悟空", 100);
	Test1(p1);

	Person<string, int> p2("猪八戒", 70);
	Test2(p2);

	//泛型类在具体刻画了其中的泛型之后,这个泛型类就变成了具体类(并且它是独一无二的)
	Person<string, int> p3("唐僧", 30);
	Test3(p3);
}

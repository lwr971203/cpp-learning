#include <iostream>
using namespace std;

//在默认情况下，C++编译器会提供给类至少四个函数：默认构造函数(空实现),默认析构函数(空实现),默认拷贝构造函数(浅拷贝),默认拷贝函数(浅拷贝的赋值函数)
class Person {
	/*Person() {
		cout << "Person的默认构造函数" << endl;
	}*/
public:
	Person(int a) {
		cout << "Person的有参构造函数" << endl;
		_age = a;
	}
	Person(const Person &p) {
		cout << "Person的拷贝构造函数" << endl;
	}
	~Person() {
		cout << "Person的析构函数" << endl;
	}

	int _age;
};

void Test1() {
	//Person p1; //提供有参构造，影响默认无参构造
	Person p2(10);
}
void Test2() {
	Person p1(10);
	Person p2(p1); //提供有参构造，不影响默认拷贝构造
	cout << "p2._age=" << p2._age << endl;
}



int main() {
	//规则1：如果提供了有参构造函数，就不会提供无参构造函数，但仍会提供拷贝构造函数
	//Test1();
	//Test2();

	//规则2：如果提供了拷贝构造，就不会提供无参构造,其实跟上个规则是一样的，拷贝构造也是有参构造

}
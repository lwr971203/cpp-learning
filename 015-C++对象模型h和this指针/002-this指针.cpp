#include <iostream>
using namespace std;

class Person {
public:
	int age;
	Person(int age) {
		//注意：在C++中this是指向当前对象实例的"指针"
		this->age = age;
	}

	//C++在实现链式编程需要返回实例自己的时候返回值都是引用
	Person& AddPersonAge(Person* p) { //这里也可以用引用
		this->age += p->age;
		return *this; //返回当前对象实例
	}

	//注:静态函数中不可有this指针
};

int main() {
	Person p1(10);
	cout << "p1.age=" << p1.age << endl;
	Person p2(10);
	//链式编程
	p2.AddPersonAge(&p1).AddPersonAge(&p1).AddPersonAge(&p1);
	cout << "p2.age=" << p2.age << endl;
}
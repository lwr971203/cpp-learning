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
	void ShowPerson1() { //������ĳ�Ա�����ڵ��õ�ʱ��Żᴴ���������ڱ�����̲�����
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
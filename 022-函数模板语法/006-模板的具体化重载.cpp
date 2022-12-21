#include <iostream>
using namespace std;
#include <string>


class Person {
public:
	string _name;
	int _age;
	Person(string name, int age) {
		this->_name = name;
		this->_age = age;
	}
};

template<typename T>
bool Compare(T& a, T& b) {
	if (a == b)
	{
		return true;
	}
	return false;
}

//模板具体化重载(C++特色,但不符合设计原则)
template<> bool Compare(Person& p1, Person& p2) {
	if (p1._name == p2._name && p1._age == p2._age)
	{
		return true;
	}
	return false;
}

int main() {
	Person p1("abc", 12);
	Person p2("abc", 12);
	cout << Compare(p1, p2) << endl;
}
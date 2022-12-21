#include <iostream>
using namespace std;
#include <string>

class Person {
public:
	string _name;
	int _age;
	Person(string name, int age) :_name(name), _age(age) {

	}
	bool operator==(Person& p) {
		if (this->_name == p._name && this->_age == p._age)
		{
			return true;
		}
		return false;
	}

	bool operator!=(Person& p) {
		return !operator==(p);
	}
};

int main() {
	Person p1("Tom", 15);
	Person p2("Tony", 15);
	cout << (p1 == p2) << endl;
	Person p3("Tony", 15);
	cout << (p3 == p2) << endl;
}
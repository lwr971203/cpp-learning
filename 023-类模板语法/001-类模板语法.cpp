#include <iostream>
using namespace std;
#include <string>

template<typename NameType,typename AgeType>
class Person {
public:
	NameType _name;
	AgeType _age;
	Person(NameType name, AgeType age) {
		this->_name = name;
		this->_age = age;
	}

	void Show() {
		cout << "name=" << this->_name << ",age=" << this->_age << endl;
	}
};


int main() {
	Person<string,int> p1("abc",10); //跟C#中一样，泛型也是接在类后面
	p1.Show();
}
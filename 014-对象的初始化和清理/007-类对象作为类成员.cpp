#include <iostream>
using namespace std;
#include <string>

class Phone {
public :
	string _phoneName;
	Phone(string phoneName) {
		_phoneName = phoneName;
		cout << "Phone的构造函数被调用" << endl;
	}

	~Phone() {
		cout << "Phone的析构函数被调用" << endl;
	}
};

class Person {
public:
	string _name;
	Phone _phone;
	Person(string name, string phoneName) :_name(name), _phone(phoneName) {
		cout << "Person的构造函数被调用" << endl;
	}
	~Person() {
		cout << "Person的析构函数被调用" << endl;
	}
};

int main() {
	Person p1("lwr","IQOO");
	cout << p1._name << "拿着" << p1._phone._phoneName << "手机" << endl;
	//当使用初始化列表的时候，成员对象的构造函数先被调用
	//析构函数Person先调用，成员对象后调用
}
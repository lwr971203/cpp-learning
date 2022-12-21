#include <iostream>
using namespace std;

class Base {
public:
	Base() {
		cout << "Base 的构造函数" << endl;
	}
	~Base() {
		cout << "Base 的析构函数" << endl;
	}
};

class Son :public Base {
public:
	Son() {
		cout << "Son 的构造函数" << endl;
	}
	~Son() {
		cout << "Son 的析构函数" << endl;
	}
};

int main() {
	Son son;
	//先调用父类的构造函数，再调用子类的构造函数
	//析构函数的顺序相反
}
#include <iostream>
using namespace std;

class Person {
public:
	Person() {
		cout << "Person 对象的构造函数调用" << endl;
	}
	~Person() { //析构函数不可有参数
		cout << "Person 对象的析构函数调用" << endl;
	}
};

void Test() {
	Person p1; //这个对象创建于栈空间中。并且在Test函数调用完之后会调用它的析构函数
}

int main() {
	Test();
}
#include <iostream>
using namespace std;

class Base1 {
public:
	int _a; //注意C++中对象的字段不具有自动初始化,Java和C#中具有
	Base1() {
		_a = 10;
	}
};

class Base2 {
public:
	int _a;
	Base2() {
		_a = 20;
	}
};

class Son :public Base1, public Base2 {
public:
	int _b;
	int _c;
};

int main() {
	Son son;
	cout << "Son 对象的sizeof=" << sizeof(son) << endl; //4个字节

	//当出现各父类出现同名成员的时候，需要加作用域区分。容易出现不易排查的问题,实际开发中不推崇多继承,C#和Java直接禁止类的多继承
	cout << "Base1 中的_a=" << son.Base1::_a << endl;
	cout << "Base2 中的_a=" << son.Base2::_a << endl;
}
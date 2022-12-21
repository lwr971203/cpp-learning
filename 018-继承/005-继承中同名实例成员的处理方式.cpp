#include <iostream>
using namespace std;

class Base {
public:
	int _a;
	Base() {
		_a = 100;
	}

	void Show() {
		cout << "Base中的Show方法" << endl;
	}

	void Show(int a) {
		cout << "Base中的重载Show(int a)" << endl;
	}
};

class Son :public Base {
public:
	int _a;
	Son() {
		_a = 200;
	}

	void Show() {
		cout << "Son中的Show方法" << endl;
	}

	//子类内部访问父类的成员
	void ShowBaseMember() {
		cout << "Son中访问Base中的_a" << endl;
		cout << "Son中访问Base中的Show(int a)==>";
		//Show(300); //语法错误,即便是子类内部也无法直接访问父类被隐藏的成员
		Base::Show(200); //需要加父类名作用域,这里注意没有C#中的关键字base
	}
};

void Test1() {
	Son son;
	cout << "Son中的_a=" << son._a << endl; //说明子类的同名字段同样会隐藏父类的字段
	cout << "Base中的_a=" << son.Base::_a << endl; //可以看到,C++提供了显式加作用域的办法调用被隐藏的父类成员,C#好像没有提供. 而且实例后面永远紧跟的是.访问,类后面永远紧跟作用域(::)访问
}

void Test2() {
	Son son;
	son.Show(); //说明子类的同名函数同样会隐藏父类的函数
	son.Base::Show(); //可以看到,C++提供了显式加作用域的办法调用被隐藏的父类成员,C#好像没有提供
}

void Test3() {
	Son son;
	//son.Show(200); //只要子类有同名成员函数，就会隐藏掉父类的所有同名函数，即包括各种重载,所以与C#的子类隐藏父类方法略有不同,C++更极端点
	son.Base::Show(300);
}

void Test4() {
	Son son;
	son.ShowBaseMember();
}

//父类无法访问子类的任何成员,因为它不知道子类具体是怎样定义的
void Test5() {
	Base base;
	cout << "the a is " << base._a << endl;
	base.Show();
}

int main() {
	Test1();
	Test2();
	Test3();
	Test4();
	Test5();
}
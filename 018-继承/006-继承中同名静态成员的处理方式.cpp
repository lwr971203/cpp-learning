#include <iostream>
using namespace std;

class Base {
public:
	static  int _a;
	static void Func() {
		cout << "Base - static void Func()" << endl;
	}
	static void Func(int a) {
		cout << "Base - static void Func(int a)" << endl;
	}
};
int Base::_a = 10;

class Son :public Base {
public:
	static int _a;
	static void Func() {
		cout << "Son - static void Func()" << endl;
	}
};
int Son::_a = 20;

void Test1() {
	cout << "通过对象去访问同名静态变量" << endl;
	Son son;
	cout << "Son 中的静态_a=" << son._a << endl;
	cout << "Base中的静态_a=" << son.Base::_a << endl;

	cout << "通过类名去访问同名静态变量" << endl;
	cout << "Son中的静态_a=" << Son::_a << endl;
	cout << "Base中的静态_a=" << Son::Base::_a << endl; //前一个::表示通过类名访问，后一个表示Base的作用域
	cout << "Base中的静态_a=" << Base::_a << endl; 
}

void Test2(){
	cout << "通过对象去访问同名静态成员函数" << endl;
	Son son;
	son.Func();
	son.Base::Func();
	//son.Func(10); //同样，同名静态成员函数也会隐藏掉父类所有的重载版本
	son.Base::Func(10);

	cout << "通过类名去访问同名静态成员函数" << endl;
	Son::Func();
	Son::Base::Func();//前一个::表示通过类名访问，后一个表示Base的作用域
	Base::Func();
	//Son::Func(10);//同样，同名静态成员函数也会隐藏掉父类所有的重载版本
	Son::Base::Func(10);
	Base::Func(10);
}

//父类无法访问子类的任何成员
void Test() {
	Base::Func();
	//Base::Son::Func();
}

int main() {
	Test1();
	Test2();
}
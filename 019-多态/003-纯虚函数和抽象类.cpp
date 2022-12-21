#include <iostream>
using namespace std;

class Base {
protected:
	int _a;
public:
	//非纯虚函数(抽象函数)是可以有自由实现的
	Base() {
		//注:抽象类的构造函数永远只能由子类调用 !  一切主动调用抽象类构造函数(或者拷贝构造)的代码都是编译错误
		_a = 10;
	}
	virtual int GetA() = 0; //只需要后面加个等于0就行。这就是个抽象类的。无法自身实例化对象。性质跟C#中的抽象类一样,但语法不同
};

class Son :public Base {
private:
	//实现类必须实现抽象类的纯虚函数,否则自己也沦为抽象类无法实例化
	int GetA() {
		return _a;
	}
};

int main() {
	Base& base = *new Son();
	cout << "base中的a为" << base.GetA() << endl;

	Base* base_p = new Son();
	cout << "base中的a为" << base_p->GetA() << endl;

	delete base_p;
}
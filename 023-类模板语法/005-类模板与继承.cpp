#include <iostream>
using namespace std;
#include <string>

template<typename T>
class Base {
public:
	T baseObj;
	virtual void Show() = 0;
};

//一种继承方式，继承的时候指定类型(还有一种优雅的说法,将泛型具体刻画)
class Son1 :public Base<int> {
public:
	void Show() {
		cout << "baseObj的类型为：" << typeid(baseObj).name() << endl;
	}
};

//另一种继承方式，继承的时候继续泛型
template<typename T1, typename T2>
class Son2 :public Base<T2> {
public:
	T1 son2Obj;
	void Show() {
		cout << "baseObj的类型为：" << typeid(this->baseObj).name() << endl;
		cout << "son2Obj的类型为：" << typeid(son2Obj).name() << endl;
	}
};

int main() {
	//注意此时的子类是一个具体类, 如果要用里氏转换规则必须要求父类也刻画成对应的具体类
	Son1 s1;
	Base<int>* base_ptr = &s1;
	base_ptr->Show();

	Son2<int,double> s2;
	Base<double>& base_ref = s2;
	base_ref.Show();
}
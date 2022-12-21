#include <iostream>
using namespace std;
#include <string>

template<typename T>
class Base {
public:
	T baseObj;
};

//一种继承方式，继承的时候指定类型
class Son1 :public Base<int> {
public:
	void Show() {
		cout << "baseObj的类型为：" << typeid(baseObj).name() << endl;
	}
};

//另一种继承方式，继承的时候继续用泛型
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
	Son1 s1;
	s1.Show();

	Son2<int,double> s2;
	s2.Show();
}
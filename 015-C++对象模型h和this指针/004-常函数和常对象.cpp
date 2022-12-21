#include <iostream>
using namespace std;

class Person {
public:
	int _a;
	mutable int _b;
	//this指针的实质是一个指针常量，指向当前对象 Person * const this	默认会为每个成员函数添加上这个指针常量
	//在函数后面添加const修饰符，表示const Person * const this。即this既无法修改指向又无法修改成员变量
	void ShowPerson() const{
		//_a = 10; 常函数无法修改普通字段
		//但是，对于特殊的加了mutable(易变的)关键字的成员变量，是可以修改的
		_b = 10;
		cout << _b << endl;
	}

	void OrdinaryFunc() {

	}
};

int main() {
 	const Person p1; //加了const修饰符表示这是个常对象
	//常对象无法修改普通字段，但能修改mutable字段
	//p1._a = 10; 
	p1._b = 20;

	//常对象只能调用常函数
	//p1.OrdinaryFunc(); //因为普通函数有可能修改普通成员变量，所以直接拦截扼杀这个可能
	p1.ShowPerson();
}
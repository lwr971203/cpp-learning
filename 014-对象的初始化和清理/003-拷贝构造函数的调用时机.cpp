#include <iostream>
using namespace std;
#include <string>

class Person {
public :
	string _name;
	int _age;
	Person() {
		cout << "Person " << _name << "无参构造函数调用" << endl;
	}
	Person(const Person &p) {
		cout << "Person " << _name << "拷贝构造函数调用" << endl;
		_age = p._age;
	}
	~Person() {
		cout << "Person "<<_name<<"析构函数调用" << endl;
		cout << "地址:" << (int)this << endl;
	}
};

void Test1(Person p) {
	p._name = "Test1中的p";
}

Person Test2() {
	Person p;
	p._age = 30;
	p._name = "Test2中的p";
	return p;
}
int main() {
	//1、用一个已经创建的对象来初始化另一个对象
	Person p1;
	p1._age = 10;
	p1._name = "p1";
	Person p2(p1);
	p2._name = "p2";
	cout << "p2._age=" << p2._age << endl;

	//2、值传递
	Person p3;
	//p3 = p1; //此时c++调用了不可显式的拷贝函数(会将所有字段拷贝,包括私有,我测试过了),而不是拷贝构造函数
	p3._age = 20;
	p3._name = "p3";
	Test1(p3); //相当于形参Person p = p3

	//3、值返回的时候
	Person p4;
	p4._name = "p4";
	cout << "p4的地址:" << (int)&p4 << endl;	
	 p4= Test2();  //注意此时调用时机是Test2()内部返回的时候调用，返回出来赋值给p4的时候不会调用了
	 p4._name = "接收了Test2的p4";
	 cout << "接收了Test2的p4的地址:" << (int)&p4 << endl;
	 Person p5 = Test2();
	 cout << "p5的地址:" << (int)&p5 << endl;
	//cout << "p4._age=" << p4._age << endl;
	 //经过我的调式，得出一个值返回时拷贝构造函数的调用规则。（不用记,太复杂）
	 //当Test2准备返回的时候，会在Test2返回的时候调用拷贝构造函数生成一个临时的Person对象，并且由指针指向它
	 //当跳出函数时，这个指针又变成了实际的临时Person对象的引用，然后将数据全部赋值给p4（调用了拷贝函数,非拷贝构造函数），最后调用临时Person对象的析构函数
	 //自始自终p4地址没有改变。并且发现p5的地址也是新的地址。
	 //总之跟C#中的引用类型接收函数返回值的行为不同

	 //所以综上所述，不管时值传递时候还是值返回的时候，都会通过拷贝构造函数生成相应的局部变量
}
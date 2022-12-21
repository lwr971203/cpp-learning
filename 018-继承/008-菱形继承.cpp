#include <iostream>
using namespace std;

class Animal {
public:
	string name;
};

class Sheep1:public Animal {
public:
	Sheep1() {
		name = "羊";
	}
};
class Camel1 :public Animal {
public:
	Camel1() {
		name = "骆驼";
	}
};
class Caonima1 :public Sheep1, public Camel1 {

};
void Test1() {
	Caonima1 caonima;
	//在菱形继承中对爷爷类继承了两份数据，且需要用作用域去限定访问.  但不管怎么说会造成资源浪费
	cout << "sizeof is " << sizeof caonima << endl; //80个字节,刚好C++中字符串默认大小是40个字节
	cout << "caonima.Sheep1::name=" << caonima.Sheep1::name << endl;
	cout << "caonima.Camel1::name=" << caonima.Camel1::name << endl;
}

//利用虚继承解决菱形继承问题
//被继承的基类叫做虚基类。底层是子类用虚基类指针继承父类成员,但在语义上没有发生改变,还是形如常规继承.  主要是为了防止后面多继承时发生菱形继承
class Sheep2 :virtual public Animal { 
public:
	Sheep2() {
		name = "羊";
	}
};
class Camel2 :virtual public Animal {
public :
	Camel2() {
		name = "骆驼";
	}
};
//当发生菱形继承,且多个父类都是虚继承于爷爷类时,父类的虚基类指针同时指向爷爷类的同一份成员
class Caonima2 :public Sheep2, public Camel2 {

};
void Test2() {
	Caonima2* caonima = new Caonima2();
	cout << "size is " << sizeof * caonima << endl; //56,说明刚好存了一份字符串name(40个字节),加上两个父类的虚基类指针16字节
	//下面哪样写都没有歧义
	cout << "caonima.Sheep2::name" << caonima->Sheep2::name << endl;
	cout << "caonima.Camel2::name=" << caonima->Camel2::name << endl; //后继承的父类最后修改了同一份数据
	
	//直接消除歧义,只有一份数据
	cout << "caonima.name=" << caonima->name << endl;
}

void main() {
	Test1();
	Test2();
}
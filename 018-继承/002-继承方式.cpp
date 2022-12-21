#include <iostream>
using namespace std;

/*
* 继承是子类将父类的所有成员一并继承,包括静态成员
 C++中的父类与子类的访问修饰符的作用与C#完全一致,只是有且仅有三个
	对于父类中的private子类无法访问,外部也无法访问.
	对于父类中的protected,子类可以访问,外部也无法访问.
	对于父类中的public,子类可以访问,外部也可以访问
注:一个面向对象编程的小tip,子类的创建实例的时候会优先创建父类的实例(调用默认构造函数,如果没有,则需要子类在构造函数处调用),所以对于private成员会一并继承下来,只不过是子类不允许访问

C++中独特的继承方式,在继承: 后接public protected private三种
	这里的继承方式表达子类在继承父类的成员后,这些成员在子类的访问修饰符的天花板级别
*/
class Base1 {
private :
	int _a;
protected:
	int _b;
public :
	int _c;
};
class Son1:public Base1 {
public:
	Son1() {
		//_a = 10; //父类的私有成员无法访问,但继承下来了
		_b = 10; //父类的保护成员可以访问，在子类依然是保护的
		_c = 10; //父类的公有成员可以访问，在子类依然是公有的
	}
};
void Test1() {
	Son1 son;
	//son._a = 10; //无法访问私有
	//son._b = 10; //无法访问保护的
	son._c = 10;
}

class Base2 {
private:
	int _a;
protected:
	int _b;
public:
	int _c;
};
class Son2:protected Base2 {
public:
	Son2() {
		//_a = 10; //父类的私有成员无法访问,但继承下来了
		_b = 10; //父类的保护成员可以访问，在子类中依然是保护的
		_c = 10; //父类的公有成员可以访问，在子类中变成了保护的
	}
};
void Test2() {
	Son2 son;
	//son._a = 10; //无法访问私有
	//son_b = 10; //无法访问受保护的
	//son._c = 10; //无法访问受保护的
}

class Base3 {
private:
	int _a;
protected:
	int _b;
public:
	int _c;
};
class Son3:private Base3 {
public:
	Son3() {
		//_a = 10; //无法访问父类的私有成员,但继承下来了
		_b = 10; //父类的保护成员可以访问，在子类中变成了私有的
		_c = 10; //父类的公有成员可以访问，在子类中变成了私有
	}
};
void Test3() {
	Son3 son;
	//son._a = 10; //私有成员无法访问
	//son._b = 10; //私有成员无法访问
	//son._c = 10; //私有成员无法访问
}

class GrandSon3:public Son3 {
public:
	GrandSon3() {
		//_a = 10; //私有成员无法访问
		//_b = 10; //私有成员无法访问
		//_c = 10; //私有成员无法访问
	}
};

int main() {

}
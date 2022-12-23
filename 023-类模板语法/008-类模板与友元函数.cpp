#include <iostream>
using namespace std;

//友元函数参数中必须含有动态的泛型类, 并且泛型只能是这个泛型提供的泛型,所以只能这种写法
template<class T1, class T2>
class Person; //这里加分号非常搞, 感觉语法很糟粕
template<class T1, class T2>
void ShowPerson2(Person < T1, T2>& p) {
	cout << "name=" << p.name << ",age=" << p.age << endl;
}

template<class T1, class T2>
class Person {
	//友元函数类外实现
	friend void ShowPerson2<>(Person < T1, T2>& p); //必须加<>，傻逼  这里莫名其妙的划红线....明明没错都是正常执行的
private:
	T1 name;
	T2 age;
public:
	Person(T1 name, T2 age) {
		this->name = name;
		this->age = age;
	}

	//下面是友元函数C++的bug演示=============================================================================
	/*
	注：
	c++可以在类内实现友元函数这个不讲理，但没办法，人家规定的
	但是这个友元函数是绝对不可以有重复定义的, 就跟全局函数一样
	*/

	//这里既不是全局函数,也不是成员函数,纯属废函数（没有任何办法调用它）
	//并且此时这个友元函数是确定的, 会埋下函数重复定义的bug
	//friend void ShowPerson1(double d) {
	//	cout << "我被调用了" << endl;
	//}

	////这也是一个确定的类内实现的友元函数,而且是全局的,这种写法会埋下重复定义的bug
	//friend void ShowPerson2(Person<string, double> p) {
	//	cout << "ShowPerson2被调用了" << endl;
	//}

	//这也是个确定的类内实现的友元函数, 而且是全局的
	//而且这里是bug, template中定义的T3和T4泛型是无效的,并且T3和T4会被隐式的改成T1和T2,也会埋下重复定义的bug(重复定义函数模板)
	//template<class T3,class T4>
	//friend void ShowPerson3(Person<T3, T4> p) {
	//	cout << "ShowPerson3被调用了" << endl;
	//}


	/*
	综上所述泛型类内实现的友元函数要满足->
	 参数中必须含有动态的泛型类, 并且泛型只能是这个泛型提供的泛型
	 才不会出现bug, 并且这些友元函数时全局的
	*/
	//第一种写法
	friend void ShowPerson4(Person p) { //这里的Person会隐式改成Person<T1,T2>
		cout << "name of type is = " << typeid(p.name).name() << endl;
		cout << "name of type is = " << typeid(p.age).name() << endl;
	}
	//第二种写法
	friend void ShowPerson5(Person<T1, T2> p) {
		cout << "name of type is = " << typeid(p.name).name() << endl;
		cout << "name of type is = " << typeid(p.age).name() << endl;
	}
	//第三种写法，但这种写法也有可能埋下bug 比如声明了两次分别为Person<A,X>、Person<A,Y> 这时同样会出现重复定义友元
	friend void ShowPerson6(Person<T1, double>p) {
		cout << "name of type is = " << typeid(p.name).name() << endl;
		cout << "name of type is = " << typeid(p.age).name() << endl;
	}


	//正常的成员函数不受影响
	void Show1(Person<int, int> p) {
		cout << "Show1 被调用了" << endl;
	}
	void Show2(double x) {
		cout << "Show2 被调用了" << endl;
	}
	template<typename T5, class T6>
	void Show3(T5 x, T6 y) {
		cout << "Show3 被调用了" << endl;
	}
};



void BugTest() {
	/*
	这里会埋下祸根（这主要是C++编译器的bug）
	编译器第一次扫描到Person<string, int> 的声明
	执行第二次的动态编译, 复刻模板类, 并将泛型占位符全部换成具体类型, 产生Person<string, double>类，此时会编译成员变量和友元函数(所有友元函数都会被确定)
	*/
	Person<string, double> p1("孙悟空", 15);
	//ShowPerson3(p1);


	/*
	这里将暴露编译错误, 编译器第一次扫描到Person<string, string>
	执行第二次的动态编译, 复刻模板类, 并将泛型占位符全部换成具体类型,, 产生Person<string, string>类, 此时会编译成员变量和友元函数
	但已经确定的友元函数在上一步已经编译好了.  所以这次再编译会报错, 显示重复定义

	避免这种错误的办法, 就是提前将确定的类内声明并实现的友元函数删去,只留下不确定的、动态的的友元函数(最多只能留下写法1、2、3)
	结果就是：要么每次编译的友元函数都不同, 不会报错.......要么就是下面的情况, 第二次的动态编译根本不执行，也不会报错
	*/
	Person<double, string> p2(16, "孙悟空");
	//使用写法3这里将会出现bug
	//Person<string, double> p3("孙悟空", 17);


	/*
	这里是不会报错的, 因为这是编译器第二次扫描到Person<string, double>,不会执行第二次的动态编译... 所以就不会发生重定义的情况
	*/
	//Person<string, double> p4("孙权" ,19);


	Person<int, int> p5(1, 2);
	ShowPerson4(p5);
	p1.Show1(p5);
	p5.Show2(5);
	p5.Show3("哈哈哈", 666);
}

void Test2() {
	Person<string, double> p1("孙悟空", 15);
	ShowPerson2(p1);
}

int main() {
	//测试友元函数类内实现
	BugTest();
	//测试友元函数类外实现
	Test2();
}
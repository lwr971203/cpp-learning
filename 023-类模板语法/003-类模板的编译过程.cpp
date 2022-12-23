#include <iostream>
using namespace std;

class Person1 {
public:
	void Show1() {
		cout << "Person1" << endl;
	}
};

class Person2 {
public:
	void Show2() {
		cout << "Person2" << endl;
	}
};

template<typename T1, typename T2>
class MyClass {
public:
	//T1 obj = 3; //这里T1与3的数据类型不对，会被第二次的动态编译检查到
	T1 obj;
	void ShowPerson1() {
		//这里是C++中的特色，开了泛型之后，如果这个函数不会被调用，则不会被编译
		//所以码代码时支持这种"预写式编程" 但是一定会受到编译时的检查（如果它在代码中被调用了）
		obj.Show1();
		//a.helloworla1 //(纯乱写肯定会被第一次的静态编译检查到)
	}
	void ShowPerson2() {
		obj.Show2();
	}

	/*
	经过一系列的调试之后我得出下面的猜测,关于C++的编译器在编译时的行为
	对于泛型类会有两次编译的过程.
	首先在扫描完泛型类的定义后会
	执行第一次的静态编译：直接执行编译且弱化语法检查, 但不是不检查（比如说你乱写）
	结果就是将泛型全部变成占位符，变成MyClass的模板类, 这个类是无法实例化的, 只是为第二次动态编译提供一个模板 ....大致形式为
	template<typename `, typename `>
	class MyClass{
	public :
		‵ obj
		void ShowPerson1( ‵ arg){
				obj.Show1();
		}
		void ShowPerson2( ‵ arg){
				obj.Show2();
		}
	}
	*/
};

int main() {
	/*
	遇到具体化的泛型类声明
	执行第二次的动态编译: ①复制模板类, 然后将所有泛型占位符具体化 ② 将成员变量（主要是类型检查）与类内实现的友元函数编译，但成员函数此时不会继续编译
										然后产生新类MyClass<Person1, double>
	template<typename Person1, typename double>
	class MyClass{
	public :
		Person1 obj
		void ShowPerson1( Person1 arg){
				obj.Show1();
		}
		void ShowPerson2( Person1 arg){
				obj.Show2();
		}
	}
	*/
	MyClass<Person1, double> p1;
	/*
	遇到MyClass<Person1, double>的成员函数调用
	执行第二次的动态编译: 对MyClass<Person1, double>中的成员函数void ShowPerson1() 继续编译
	*/
	p1.ShowPerson1();
	/*
	同样的
	执行第二次的动态编译: 对MyClass<Person1, double>中的成员函数void ShowPerson2() 继续编译
	*/
	p1.ShowPerson2();

	//综上所述上面的所有过程都是发生在编译时期, 并且是从上至下（C/C++尿性）的时间顺序
	//所以只能说站在编译的角度，泛型类的比常规类更加 "动态" 一点
}
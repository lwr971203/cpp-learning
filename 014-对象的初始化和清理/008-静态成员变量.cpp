#include <iostream>
using namespace std;

class Person {
	//静态成员变量属于全局区,只有一份数据.所有实例对象共享
public :
	static int _a; //C++规定静态成员必须在类外初始化(奇葩)
	// static int _b; //C++规定静态成员变量必须初始化(奇葩)
private :
	static int _c;
};
int Person::_a = 10;
int Person::_c = 12;

void Test1() {
	Person p1;
	p1._a = 20;
	Person p2;
	p2._a = 30;
	cout << "p1._a=" << p1._a << endl;
	cout << "p2._a=" << p2._a << endl;

	//类名双冒号访问,在C#都统一成.
	int a = Person::_a;
}

int main() {
	Test1();
	//使用类名访问
	cout << "Person::_a=" << Person::_a << endl;

	//无法访问私有的静态成员
	//int b= Person::_c;
	
}
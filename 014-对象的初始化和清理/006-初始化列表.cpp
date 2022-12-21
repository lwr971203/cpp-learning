#include <iostream>
using namespace std;

class Person {
public :
	int _a;
	int _b;
	int _c;
	Person(int a,int b,int c):_a(a),_b(b),_c(c) //C++特色语法. 
	{
		cout << "初始化列表构造函数调用" << endl;
	}
};

int main() {
	Person p1(10,20,30);
	cout << "p1._a=" << p1._a << endl;
	cout << "p1._b=" << p1._b << endl;
	cout << "p1._c=" << p1._c << endl;
}
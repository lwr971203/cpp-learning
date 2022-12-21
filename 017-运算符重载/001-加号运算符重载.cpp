#include <iostream>
using namespace std;

class Person {
public:
	int _a;
	int _b;
	Person(int a, int b) :_a(a), _b(b) {

	}
	//利用成员函数进行运算符重载
	//Person operator+(Person& p) {
	//	Person temp(0,0);
	//	temp._a = this->_a + p._b;
	//	temp._b = this->_b + p._b;
	//	return temp;
	//}
};

//利用全局函数进行运算符重载
Person operator+(Person& p1, Person& p2) {
	Person temp(10, 10);
	temp._a = p1._a + p2._a;
	temp._b = p1._b + p2._b;
	return temp;
}

Person operator+(Person& p, int a) {
	Person temp(0, 0);
	temp._a = p._a + a;
	temp._b = p._b + a;
	return temp;
}

int main() {
	Person p1(10, 20);
	Person p2(20, 30);

	Person sumP1 = p1 + p2; //成员函数重载运算符
	//本质写法
	//Person sumP1 = p1.operator+(p2);
	//cout << sumP1._a << "," << sumP1._b << endl;

	//注：重载不能有歧义,即此案例的成员函数运算符重载和全局函数运算符重载只能留一个

	//Person sumP2 = p1 + p2; //全局函数重载运算符
	//本质写法
	/*Person sumP2 = operator+(p1,p2);
	cout << sumP2._a << "," << sumP2._b << endl;*/

	Person sumP3 = p1 + 10;
	cout << sumP3._a << "," << sumP3._b << endl;
}
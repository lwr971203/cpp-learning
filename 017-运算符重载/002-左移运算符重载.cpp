#include <iostream>
using namespace std;

class Person {
	friend ostream& operator<<(ostream& out, Person& p); //使运算发重载可以访问到私有成员
private:
	int _a;
	int _b;

public:
	Person(int a, int b) :_a(a), _b(b) {

	}

	//通常不利用成员函数取重载<<。因为会变成Person << cout ,达不到效果
};

//想要达到效果，需要使用全局函数取重载<<
ostream& operator<<(ostream& out, Person& p) {
	cout << "Person._a:" << p._a << "," << "Person._b:" << p._b << endl;
	return out;
}

int main() {
	Person p = Person(10, 20);
	cout << p << "\tHello World!";
}
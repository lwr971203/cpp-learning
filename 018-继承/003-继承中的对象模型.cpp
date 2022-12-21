#include <iostream>
using namespace std;

class Base {
public:
	int _a;
protected:
	int _b;
private:
	int _c;
};

class Son:public Base {
public:
	int _d;
};


int main() {
	//继承会把父类的所有成员都继承下来，包括私有的。只不过子类无法访问私有的
	cout << "size of Son" << sizeof(Son) << endl; //16个字节
}
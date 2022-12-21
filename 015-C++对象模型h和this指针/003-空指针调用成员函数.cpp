#include <iostream>
using namespace std;

class Person {
public:
	int _age;
	void ShowMsg() {
		cout << "Hello World" << endl;
	}
	void ShowAge() {
		//cout << "_age=" << _age << endl; //编译成功,但运行失败.  当空指针访问实例成员变量的时候会爆空指针异常,如果没有访问到就没事
		//访问实例成员变量时C++编译器会默认给上面这条函数的_age加上this->_age
		//当对象调用原本就是存在内存中单独一份的成员函数的时候，会将对象指针传入this
		//这也是为什么成员函数能区分每个对象的一个原因

		//C++空指针竟然可以访问成员函数(太致命了),所以要做空指针校验
		if (this == NULL) {
			cout << "无法使用空指针调用!" << endl;
			return;
		}

		cout << "_age" << _age << EDOM;
	}
};

int main() {
	Person* p1 = NULL;
	p1->ShowMsg();
	p1->ShowAge();
}
#include <iostream>
using namespace std;

/*
- 函数对象在使用时，可以像普通函数那样调用, 可以有参数，可以有返回值
- 函数对象超出普通函数的概念，函数对象可以有自己的状态
- 函数对象可以作为参数传递
*/

class MyPrint {
private:
	int call_count; //函数对象可以超普通函数,可以有自己的状态
public:
	MyPrint() {
		this->call_count = 0;
	}
	void operator()(string msg) {
		cout << msg << endl;
		this->call_count++;
	}
	int GetCallCont() {
		return this->call_count;
	}
};

void Test1() {
	MyPrint mp;
	mp("Hello World");
	mp("Hello World");
	mp("Hello World");
	mp("Hello World");
	mp("Hello World");
	cout << "调用了函数对象 " << mp.GetCallCont() << "次" << endl;
}

void DoPrint(MyPrint& mp , string msg) {
	mp(msg);
}

int main() {
	Test1();
	MyPrint mp;
	string msg = "hello world";
	DoPrint(mp,msg);
}
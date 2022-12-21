#include <iostream>
using namespace std;

class MyInteger {
	friend ostream& operator<<(ostream &out, MyInteger &myInterger);
private:
	int _value;
	int _stepLength;
public:

	MyInteger(int value, int stepLength) :_value(value), _stepLength(stepLength) {

	}

	//利用成员函数重载递增运算符
	MyInteger& operator++() {
		this->_value += _stepLength;
		return *this;
	}

	//必须以int的占位参数表示后置递增
	MyInteger operator++(int) {
		MyInteger temp = *this; //记录递增之前的状态
		this->_value += _stepLength; //偷偷自增
		return temp; //把之前的状态返回
	}
};

ostream& operator<<(ostream &out, MyInteger &myInterger) {
	cout << myInterger._value << endl;
	return out;
}

int main() {
	MyInteger myInteger(10, 2);
	cout << ++myInteger;
	cout << myInteger;

	//cout << myInteger++; //报错
	//注：对于后置递增cout << myInteger++出错的原因
	//myInterger++在出来的时候是一个新的副本的引用,即MyInterger&,而这个副本很快就要被销毁
	//operator<<的第二个引用参数无法接收一个即将被销毁的副本
	//将operator中的实例改成堆区实例就没事,但是这样要手动销毁堆区内存


	MyInteger m1 = myInteger++;
	cout << m1;
	cout << myInteger;

	
}
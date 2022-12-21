#include <iostream>
using namespace std;

class Calculator {
protected:
	int _num1;
	int _num2;
public:
	Calculator* SetNums(int num1, int num2) {
		_num1 = num1;
		_num2 = num2;
		return this;
	}
	virtual int GetResult() {
		return 0;
	}
};

class Add :public Calculator {
private:
	int GetResult() {
		return _num1 + _num2;
	}
};

class Sub :public Calculator {
private:
	int GetResult() {
		return _num1 - _num2;
	}
};

class Mul :public Calculator {
private:
	int GetResult() {
		return _num1 * _num2;
	}
};

class Div :public Calculator {
private:
	int GetResult() {
		return _num1 / _num2;
	}
};

void Test1() {
	Calculator *p = new Add();
	cout << "10+20=" << p->SetNums(10, 20)->GetResult() << endl;
	delete p;

	p = new Sub();
	cout << "30-6=" << p->SetNums(30, 6)->GetResult() << endl;
	delete p;
	
	p = new Mul();
	cout << "15*5=" << p->SetNums(15, 5)->GetResult() << endl;
	delete p;

	p = new Div();
	cout << "63/7=" << p->SetNums(63,7)->GetResult()<<endl;	
}

void Test2() {
	Add *a = new Add();
	Calculator &p = *a;
	cout << "10+20=" << p.SetNums(10, 20)->GetResult() << endl;	
}

int main() {
	Test1();
	Test2();
}
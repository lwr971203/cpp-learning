#include <iostream>
using namespace std;
#include <string>

class Person {
private:
	string _name;
	int _age;
	string _lover;
public:
	void SetName(string name) {
		_name = name;
	}
	void SetAge(int age) {
		if (age<0||age>=150)
		{
			age = 0;
			cout << "你个老妖精" << endl;
		}
		_age = age;
	}
	void SetLover(string lover) {
		_lover = lover;
	}
	string GetName() {
		return _name;
	}
	int GetAge() {
		return _age;
	}
	string GetLover() {
		return _lover;
	}
	void Show() {
		cout << "我叫:" << _name << ",年龄:" << _age <<",我的爱人:"<<_lover<< endl;
	}
};

int main() {
	Person p;
	p.SetName ("郭靖");
	p.SetAge(200);
	p.SetLover("黄蓉");

	p.Show();
}
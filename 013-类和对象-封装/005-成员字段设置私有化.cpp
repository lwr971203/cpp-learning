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
			cout << "���������" << endl;
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
		cout << "�ҽ�:" << _name << ",����:" << _age <<",�ҵİ���:"<<_lover<< endl;
	}
};

int main() {
	Person p;
	p.SetName ("����");
	p.SetAge(200);
	p.SetLover("����");

	p.Show();
}
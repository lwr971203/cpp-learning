#include <iostream>
using namespace std;
#include <string>

class Phone {
public :
	string _phoneName;
	Phone(string phoneName) {
		_phoneName = phoneName;
		cout << "Phone�Ĺ��캯��������" << endl;
	}

	~Phone() {
		cout << "Phone����������������" << endl;
	}
};

class Person {
public:
	string _name;
	Phone _phone;
	Person(string name, string phoneName) :_name(name), _phone(phoneName) {
		cout << "Person�Ĺ��캯��������" << endl;
	}
	~Person() {
		cout << "Person����������������" << endl;
	}
};

int main() {
	Person p1("lwr","IQOO");
	cout << p1._name << "����" << p1._phone._phoneName << "�ֻ�" << endl;
	//��ʹ�ó�ʼ���б��ʱ�򣬳�Ա����Ĺ��캯���ȱ�����
	//��������Person�ȵ��ã���Ա��������
}
#include <iostream>
using namespace std;

class Person {
public:
	int age;
	Person(int age) {
		//ע�⣺��C++��this��ָ��ǰ����ʵ����"ָ��"
		this->age = age;
	}

	//C++��ʵ����ʽ�����Ҫ����ʵ���Լ���ʱ�򷵻�ֵ��������
	Person& AddPersonAge(Person* p) { //����Ҳ����������
		this->age += p->age;
		return *this; //���ص�ǰ����ʵ��
	}

	//ע:��̬�����в�����thisָ��
};

int main() {
	Person p1(10);
	cout << "p1.age=" << p1.age << endl;
	Person p2(10);
	//��ʽ���
	p2.AddPersonAge(&p1).AddPersonAge(&p1).AddPersonAge(&p1);
	cout << "p2.age=" << p2.age << endl;
}
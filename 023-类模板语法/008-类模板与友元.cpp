#include <iostream>
using namespace std;
#include <string>

//ȫ�ֺ�������ʵ�ֱ������Щɵ�ƴ���
template<class T1,class T2>
class Person;
template<class T1,class T2>
void ShowPerson2(Person < T1, T2> &p) {
	cout << "name=" << p._name << ",age=" << p._age << endl;
}


template<class T1,class T2>
class Person {
	//ȫ�ֺ���������ʵ�֡�ͨ��ֻ�������ַ���
	friend void ShowPerson1(Person<T1, T2> &p) { //������������Ϳ������ɽ�������������һ��
		cout << "name=" << p._name << ",age=" << p._age << endl;
	}

	//ȫ�ֺ���������ʵ�֣������鷳�������﷨����������
	friend void ShowPerson2<>(Person < T1, T2> &p); //�����<>��ɵ��
private:
	T1 _name;
	T2 _age;
public:
	Person(T1 name,T2 age) {
		this->_name = name;
		this->_age = age;
	}
};

//����ȫ�ֺ�������ʵ��
void Test1() {
	Person<string, int> p("�����", 100);
	ShowPerson2(p);
}

//����ȫ�ֺ�������ʵ��
void Test2() {
	Person<string, int> p("�����", 100);
	ShowPerson1(p);
}

int main() {
	Test1();
	Test2();
}


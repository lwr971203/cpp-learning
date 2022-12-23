#include <iostream>
using namespace std;
#include <string>

template<typename T1, typename T2>
class Person {
public:
	T1 _name;
	T2 _age;

	Person(T1 name, T2 age) {
		this->_name = name;
		this->_age = age;
	}

	void Show() {
		cout << "name=" << this->_name << ",age=" << this->_age << endl;
	}
};

//����ָ������,��������ʹ�õ�ʱ������þ������Ϳ̻����߼������·��Ͷ���
void Test1(Person<string, int>& p) {
	p.Show();
}

//���·��Ͷ���
template<typename T1, typename T2>
void Test2(Person<T1, T2>& p) {
	p.Show();
	cout << "T1������:" << typeid(T1).name() << endl;
	cout << "T2������:" << typeid(T2).name() << endl;
}

//��������ľ���̻���̬��Ϊ����
template<typename T>
void Test3(T& p) {
	p.Show();
	cout << "T������:" << typeid(T).name() << endl;
}

int main() {
	Person<string, int> p1("�����", 100);
	Test1(p1);

	Person<string, int> p2("��˽�", 70);
	Test2(p2);

	//�������ھ���̻������еķ���֮��,���������ͱ���˾�����(�������Ƕ�һ�޶���)
	Person<string, int> p3("��ɮ", 30);
	Test3(p3);
}

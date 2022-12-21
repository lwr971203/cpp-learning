#include <iostream>
using namespace std;
#include <string>

template<class NameType,class AgeType = int> //��ģ�������Ĭ�����Ͳ���
class Person {
public:
	NameType _name;
	AgeType _age;
	Person(NameType name,AgeType age) {
		this->_name = name;
		this->_age = age;
	}

	void Show(){
		cout << "name=" << this->_name << ",age=" << this->_age << endl;
	}
};

int main() {
	//��ģ��û���Զ������Ƶ�
	//Person p1("�����",100); //����
	Person<string, int> p1("�����",100);
	p1.Show();

	Person<string> p2("��˽�",20);
	p2.Show();
}
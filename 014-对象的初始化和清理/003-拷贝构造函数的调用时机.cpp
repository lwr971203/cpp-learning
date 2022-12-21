#include <iostream>
using namespace std;
#include <string>

class Person {
public :
	string _name;
	int _age;
	Person() {
		cout << "Person " << _name << "�޲ι��캯������" << endl;
	}
	Person(const Person &p) {
		cout << "Person " << _name << "�������캯������" << endl;
		_age = p._age;
	}
	~Person() {
		cout << "Person "<<_name<<"������������" << endl;
		cout << "��ַ:" << (int)this << endl;
	}
};

void Test1(Person p) {
	p._name = "Test1�е�p";
}

Person Test2() {
	Person p;
	p._age = 30;
	p._name = "Test2�е�p";
	return p;
}
int main() {
	//1����һ���Ѿ������Ķ�������ʼ����һ������
	Person p1;
	p1._age = 10;
	p1._name = "p1";
	Person p2(p1);
	p2._name = "p2";
	cout << "p2._age=" << p2._age << endl;

	//2��ֵ����
	Person p3;
	//p3 = p1; //��ʱc++�����˲�����ʽ�Ŀ�������(�Ὣ�����ֶο���,����˽��,�Ҳ��Թ���),�����ǿ������캯��
	p3._age = 20;
	p3._name = "p3";
	Test1(p3); //�൱���β�Person p = p3

	//3��ֵ���ص�ʱ��
	Person p4;
	p4._name = "p4";
	cout << "p4�ĵ�ַ:" << (int)&p4 << endl;	
	 p4= Test2();  //ע���ʱ����ʱ����Test2()�ڲ����ص�ʱ����ã����س�����ֵ��p4��ʱ�򲻻������
	 p4._name = "������Test2��p4";
	 cout << "������Test2��p4�ĵ�ַ:" << (int)&p4 << endl;
	 Person p5 = Test2();
	 cout << "p5�ĵ�ַ:" << (int)&p5 << endl;
	//cout << "p4._age=" << p4._age << endl;
	 //�����ҵĵ�ʽ���ó�һ��ֵ����ʱ�������캯���ĵ��ù��򡣣����ü�,̫���ӣ�
	 //��Test2׼�����ص�ʱ�򣬻���Test2���ص�ʱ����ÿ������캯������һ����ʱ��Person���󣬲�����ָ��ָ����
	 //����������ʱ�����ָ���ֱ����ʵ�ʵ���ʱPerson��������ã�Ȼ������ȫ����ֵ��p4�������˿�������,�ǿ������캯��������������ʱPerson�������������
	 //��ʼ����p4��ַû�иı䡣���ҷ���p5�ĵ�ַҲ���µĵ�ַ��
	 //��֮��C#�е��������ͽ��պ�������ֵ����Ϊ��ͬ

	 //������������������ʱֵ����ʱ����ֵ���ص�ʱ�򣬶���ͨ���������캯��������Ӧ�ľֲ�����
}
#include <iostream>
using namespace std;

class Person {
public:
	string name;
	int age;
};

//������������ȫ��Ӧʵ��
int main() {
	int a = 10;

	//1�����ñ����ʼ��
	//int &b; //����
	int& b = a; //��ȷ

	//2������ֻ���ʼ��һ��
	int c = 20;
	b = c; //��ʱ�Ѿ�����˸�ֵ������

	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
	cout << "c=" << c << endl;

	//����ֻ��������ʵ��
	Person p0;
	Person& p0_ref = p0;

	Person p1 = Person();
	Person& p1ref = p1;

	Person* p2 = &Person();
	Person& p2_ref = *p2;

	Person* p3 = new Person();
	Person p3_ref = *p3;

	//����ʾ��
	Person* p4 = new Person();
	//Person& p4_ref = p4;
	/*
	1����������������غ���,һ���ò���Personһ��������Person&,������ͻ,�������
	2����Ȼ���ñ�����ָ�볣����ʵ��,��c++�����ϲ��ɽ���ָ��,������Ӧ�ÿ���ʵ������.
		 ����ʵ���������е�ϸ΢������,C++ʵ���ϻ�����Դ�Person��Person&,��Ϊ����������
	3�����ò����ڿ���������Ϊ
	*/
}
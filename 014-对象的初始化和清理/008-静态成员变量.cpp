#include <iostream>
using namespace std;

class Person {
	//��̬��Ա��������ȫ����,ֻ��һ������.����ʵ��������
public :
	static int _a; //C++�涨��̬��Ա�����������ʼ��(����)
	// static int _b; //C++�涨��̬��Ա���������ʼ��(����)
private :
	static int _c;
};
int Person::_a = 10;
int Person::_c = 12;

void Test1() {
	Person p1;
	p1._a = 20;
	Person p2;
	p2._a = 30;
	cout << "p1._a=" << p1._a << endl;
	cout << "p2._a=" << p2._a << endl;

	//����˫ð�ŷ���,��C#��ͳһ��.
	int a = Person::_a;
}

int main() {
	Test1();
	//ʹ����������
	cout << "Person::_a=" << Person::_a << endl;

	//�޷�����˽�еľ�̬��Ա
	//int b= Person::_c;
	
}
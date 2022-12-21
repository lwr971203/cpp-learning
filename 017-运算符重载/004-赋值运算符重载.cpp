#include <iostream>
using namespace std;

class Person {
public:
	int* _a;
	Person(int a) {
		_a = new int(a);
	}
	~Person() {
		if (_a != NULL)
		{
			delete _a;
			_a = NULL;
		}
	}
	Person& operator=(Person& p) {
		//C++Ĭ�ϵĸ�ֵ�����(��������)��ǳ�����������������ֶ�Ϊָ�룬�����޷��ͷŸ�ָ��ָ����ڴ�
		//�����ڳ��ֵ��÷���ջʱ,�ظ��ͷ��ڴ�
		//_a = p._a; //���ַ�ʽ����Ĭ�ϵ�ǳ������ʽ,ֱ��ָ���ĵ�ַ����������

		//��ȷ��Ӧ����������Լ������ڶ������⿪���ڴ�
		//������Ѵ��ڶ��ڴ�
		if (_a != NULL)
		{
			delete _a;
		}

		_a = new int(*p._a); //��ʵ�������ݿ������������ǽ�ʵ���ĵ�ַ��������

		return *this;
	}
};

int main() {
	Person p1(10);
	Person p2(20);
	Person p3(30);
	p3 = p2 = p1;
	cout << "*p1._a=" << *p1._a << endl;
	cout << "*p2._a=" << *p2._a << endl;
	cout << "*p3._a=" << *p3._a << endl;
}
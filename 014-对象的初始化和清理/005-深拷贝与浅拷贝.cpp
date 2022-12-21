#include <iostream>
using namespace std;

class Person1 {
public:
	int _age;
	int* _ref;
	Person1(int age, int value) {
		_age = age;
		_ref = new int(value); //�ڶ��������ڴ�ռ�
	}
	~Person1() {
		cout << "Person1��������������" << endl;
	}
};

class Person2 {
public:
	int _age;
	int* _ref;
	Person2(int age, int value) {
		_age = age;
		_ref = new int(value); //�ڶ��������ڴ�ռ�
	}
	~Person2() {
		cout << "Person2��������������" << endl;
		if (_ref != NULL)
		{
			delete _ref; //�ͷŶ��ڴ�
			_ref = NULL; //ָ���ÿ�
		}
	}
};

class Person3 {
public:
	int _age;
	int* _ref;
	Person3(int age, int value) {
		_age = age;
		_ref = new int(value); //�ڶ��������ڴ�ռ�
	}
	Person3(const Person3& p) {
		_age = p._age;
		_ref = new int(*p._ref);
		cout << "Person3�Ŀ������캯������" << endl;
	}
	~Person3() {
		cout << "Person3��������������" << endl;
		if (_ref != NULL)
		{
			delete _ref; //�ͷŶ��ڴ�
			_ref = NULL; //ָ���ÿ�
		}
	}
};

int main() {
	//���������������ͷŶ��ڴ�ռ䣬���ᱨ�����ǲ���
	Person1 p1(10, 100);
	Person1 p2(p1);
	cout << "p1._age=" << p1._age << ",*p1._ref=" << *p1._ref << endl;
	cout << "p2._age=" << p2._age << ",*p2._ref=" << *p2._ref << endl;

	//���������������б�׼���ͷŶ��ڴ�ռ䣬Ĭ�ϲ���ǳ����
	//Person2 p3(10,100);//��ʱp3��ջ�����⣬��Ϊ��ջ�к����ȳ���p4�ȱ��ͷţ�_refָ��Ķѿռ��ͷţ�����p3�е�_refָ����ָ����ڴ棬ִ��deleteʱ�ͻᱨ���ˣ��ظ��ͷţ�
	//Person2 p4(p3); 

	//�����Լ�д�Ŀ������캯���ṩ������Ͳ��ᷢ����������
	Person3 p5(10, 100);
	Person3 p6(p5);
	cout << "p5._age=" << p5._age << ",*p5._ref=" << *p5._ref << endl;
	cout << "p6._age=" << p6._age << ",*p6._ref=" << *p6._ref << endl;
}
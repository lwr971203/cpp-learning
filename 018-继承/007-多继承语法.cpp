#include <iostream>
using namespace std;

class Base1 {
public:
	int _a; //ע��C++�ж�����ֶβ������Զ���ʼ��,Java��C#�о���
	Base1() {
		_a = 10;
	}
};

class Base2 {
public:
	int _a;
	Base2() {
		_a = 20;
	}
};

class Son :public Base1, public Base2 {
public:
	int _b;
	int _c;
};

int main() {
	Son son;
	cout << "Son �����sizeof=" << sizeof(son) << endl; //4���ֽ�

	//�����ָ��������ͬ����Ա��ʱ����Ҫ�����������֡����׳��ֲ����Ų������,ʵ�ʿ����в��Ƴ��̳�,C#��Javaֱ�ӽ�ֹ��Ķ�̳�
	cout << "Base1 �е�_a=" << son.Base1::_a << endl;
	cout << "Base2 �е�_a=" << son.Base2::_a << endl;
}
#include <iostream>
using namespace std;

class Base {
public:
	Base() {
		cout << "Base �Ĺ��캯��" << endl;
	}
	~Base() {
		cout << "Base ����������" << endl;
	}
};

class Son :public Base {
public:
	Son() {
		cout << "Son �Ĺ��캯��" << endl;
	}
	~Son() {
		cout << "Son ����������" << endl;
	}
};

int main() {
	Son son;
	//�ȵ��ø���Ĺ��캯�����ٵ�������Ĺ��캯��
	//����������˳���෴
}
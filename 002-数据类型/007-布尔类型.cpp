#include <iostream>
using namespace std;

int main() {
	//��C++�з�0Ϊtrue ��0 Ϊfalse������C���
	bool b1 = true;
	cout << "��������true��C++�е�ֵ=" << b1 << endl; //���Ϊ1

	bool b2 = false;
	cout << "��������false��C++�е�ֵ=" << b2 << endl; //���Ϊ0

	//bool���ڴ��еĴ�С
	cout << "�����������ڴ��еĴ�С=" << sizeof(bool) << endl; //1���ֽ�
}
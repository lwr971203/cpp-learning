#include <iostream>
using namespace std;

int main() {
	//���þ��Ǹ��������������һ���ڴ�ʵ�������ж������������ʶ��������ʾ
	//���õ��ڲ�ʵ����һ��ָ�볣��,������ʱ�����ʼ��
	int a = 10;
	int& b = a;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;

	b = 20;
	cout << "a=" << a << endl;
	cout << "b=" << b << endl;
}
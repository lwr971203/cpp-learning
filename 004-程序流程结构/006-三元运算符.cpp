#include <iostream>
using namespace std;

int main() {
	//���������ֵ
	int i1 = 10;
	int i2 = 20;
	int i3 = 0;
	i3 = i1 > i2 ? i1 : i2;
	cout << "���������ֵΪ:" << i3 << endl;

	//��C++����Ԫ��������Է��ر������Ҹ�����ֵ
	(i1 > i2 ? i1 : i2) = 100;
	cout << "i1:" << i1 << endl; //10
	cout << "i2:" << i2 << endl; //100
}
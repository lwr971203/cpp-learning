#include <iostream>
using namespace std;

int main() {
	int i1 = 10; 
	int i2 = 3;
	cout << "i1%i2=" << i1 % i2 << endl;

	//ȡģȡ������ʱ�򣬾������Լ�����
	int i3 = 5;
	int i4 = 6;
	cout << "i3 % i4 = " << i3 % i4 << endl;

	//ȡģ��Ȼ���ܶ�0
	int i5=7;
	//i5 = i5 % 0; //ֱ�ӱ���

	//С������ȡģ
	double d1 = 2.5;
	double d2 = 0.6;
	//cout << d1 % d2 << endl; //�������
}
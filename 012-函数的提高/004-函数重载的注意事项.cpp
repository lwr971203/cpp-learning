#include <iostream>
using namespace std;

void Func(int& a) {
	cout << "Func(int &a)" << endl;
}

//constҲ������Ϊ���ص�����
void Func(const int& a) {
	cout << "Func(const int &a)" << endl;
}

void Func1(int a) {
	cout << "Func1(int a)" << endl;
}

void Func1(int a, int b = 10) {
	cout << "Func1(int a ,b=10)" << endl;
}

int main() {
	int a = 10;
	Func(a); //Ĭ�ϵ��õ�һ������Ϊa�����ǿ�д�ģ��������ȵ��õ�һ��
	Func(10); //ֻ�ܵ��õڶ�������Ϊ��һ����ֵ���Ϸ�


	//Func1(10); //���ó������壬���붼����ȥ
	Func1(10, 20); //��ʱ�����������
	return 0;
}
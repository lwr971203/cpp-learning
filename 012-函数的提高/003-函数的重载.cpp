#include <iostream>
using namespace std;

//����������Ҫ����ͬһ���������£���������ͬ������ǩ��(�������������β��б�)��ͬ��
void Func() {
	cout << "I am Func()" << endl;
}

void Func(int a) {
	cout << "I am Func(int a)" << endl;
}

void Func(double a) {
	cout << "I am Func(double a)" << endl;
}

void Func(double a, int b) {
	cout << "I am Func(double a,int b)" << endl;
}

void Func(int a, double b) {
	cout << "I am Func(int a,double b)" << endl;
}

//ע��������ֻ�з���ֵ��ͬ���޷����أ�������󣩣���Ϊ������
//int Func(double a) {
//
//}

int main() {
	Func();
	Func(1);
	Func(2.5);
	Func(1.5,10);
	Func(1,10.2);
}
#include <iostream>
using namespace std;
//1����Ҫ���ؾֲ�ʵ��������
int& Test1() {
	int a = 10;
	return a;
}

//2�����÷���ֵ����Ϊ��ֵ(ţ...)
int& Test2() {
	static int a = 10; //��̬�ֲ������Ǵ���ȫ�����ģ��ڳ������ʱ�ͷ�
	return a;
}
int main() {
	int& ref = Test1();
	cout << ref << endl;
	cout << ref << endl; //�����Ǹ����⣬�ֲ�ʵ�����ͷ��ˣ�ֵ����

	int& ref2 = Test2();
	cout << ref2 << endl; //10
	Test2() = 1000;
	cout << ref2 << endl; //1000
}
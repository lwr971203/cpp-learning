#include <iostream>
using namespace std;

//ռλ������ֻдһ���������;��У������������Ҵ�
void TestFunc1(int a, int) {
	cout << a << endl;
}

//ռλ���������ǿ�ѡ����
void TestFunc2(int a, int = 10) {
	cout << a << endl;
}
int main() {
	TestFunc1(1,2);
	TestFunc2(15);
}
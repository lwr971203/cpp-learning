#include <iostream>
using namespace std;
#include "swap.h" //˫���ű�ʾ���������Լ�д��ͷ�ļ�

int main() {
	int num1 = 10;
	int num2 = 30;

	cout << "num1:" << num1 << endl;
	cout << "num2:" << num2 << endl;

	Swap(num1,num2);

	cout << "num1:" << num1 << endl;
	cout << "num2:" << num2 << endl;
}
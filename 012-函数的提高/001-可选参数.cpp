#include <iostream>
using namespace std;

//C++�еĿ�ѡ�����涨�����ǰ����ֿ�ѡ�������������ȫ�����ǿ�ѡ����
int Sum(int num1,int num2=10,int num3=10) {
	return num1 + num2 + num3;
}

//��ѡ����ֻ�ܳ������������߶����е�����һ��
//����
void Test1(int a =10, int b=7);

void Test1(int a =10,int b=1) { //�������������ж�����

}

int main() {
	int num1 = 5, num2 = 6, num3 = 7;
	cout << "sum1=" << Sum(num1) << endl;
	cout << "sum2=" << Sum(num1,num2) << endl;
	cout << "sum3=" << Sum(num1,num2,num3) << endl;
}
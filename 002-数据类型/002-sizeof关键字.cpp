#include <iostream>
using namespace std;

int main() {
	int num1 = 1;
	short num2 = 1;
	long num3 = 1;
	long long num4 = 1;

	//sizeof�ؼ��ֿ��Է����ͻ����Ǳ���
	cout << "int ������ռ�õ��ڴ�ռ�Ϊ:" << sizeof(int) << endl; //����ֱ�Ӹ�����������   int Ϊ4���ֽ�
	cout << "int ������ռ�õ��ڴ�ռ�Ϊ:" << sizeof(num1) << endl; // ���Ը�������
	//ע����sizeof��ʹ�����ŵ�ʱ��,ֻ�ܽӱ���
	cout << "int ������ռ�õ��ڴ�ռ�Ϊ:" << sizeof num1<<endl;

	cout << "short ������ռ�õ��ڴ�ռ�Ϊ:" << sizeof(short) << endl;  // �����ֽڴ�С
	cout << "long ������ռ�õ��ڴ�ռ�Ϊ:" << sizeof(long) << endl; //�����Ǹ����� C++��long������ռ��4���ֽ�
	cout << "long long ������ռ�õ��ڴ�ռ�Ϊ:" << sizeof(long long) << endl; // long long����ռ��8��

}
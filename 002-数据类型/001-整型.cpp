#include <iostream>
using namespace std;

int main() {
	//������ 2���ֽ�
	short num1 = 32768; //������Χ���-32768  �������Ĳ���洢��ʽ�й�

	//���� 4���ֽ�
	int num2 = 32768;

	//������ 8���ֽڣ�64λ������window�� linux����4���ֽ�  4���ֽڣ�32λ������window��
	long num3 = 10;

	//�������� 8���ֽ�
	long long num4 = 41654641641;

	cout << num1 << endl;
	cout << num2 << endl;
	cout << num3 << endl;
	cout << num4 << endl;

	//ע:C++һ����������������char short ����������int���� . C++��û��byte����
}
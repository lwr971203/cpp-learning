#include <iostream>
using namespace std;
//2���������ò���
void Print(const int& a) {
	//a = 1000; //��ֹ�޸�
	cout << "a=" << a << endl;
}

int main() {
	//1���ֲ���������
	//int& ref = 10; //����������һ��������(ȫ����)��������������,��ʱʵ��(Ҳ��ȫ����)Ҳ����
	const int& ref = 10; //��ʱ���ԣ���Ϊ�����������Զ������Ż�.int temp = 10 ; const int& ref = temp;
	//ע: ����const���β����޸�,���Ƴ���ָ�볣��
	int a = 100;
	Print(100);
}
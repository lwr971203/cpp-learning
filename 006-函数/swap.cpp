#include "swap.h" //��ǰ��д��swap.hͷ�ļ�����,�����Դ�ļ�����ʵ��


void Swap(int num1,int num2) {
	int temp = num1;
	num1 = num2;
	num2 = temp;

	//swap.h���Ѿ�������iostreamͷ�ļ����std�����ռ���,����ֱ����
	cout << "num1:" << num1 << endl;
	cout << "num2:" << num2 << endl;
}
#include <iostream>
using namespace std;
#include <ctime>

void main() {
	//��Ҫ�����������Ҫ��ʱ���ṩһ�����ӡ���������
	srand((unsigned int)time(NULL)); //��Ҫһ��ctimeͷ�ļ�
	//rand()%100��ʾ0~100��α�����
	int randNum = rand() % 100 + 1;

	cout << "��������µ�����" << endl;
	int num = 0;
	while (true)
	{	
		cin >> num;
		if (num == randNum) {
			cout << "��ϲ���¶���,�����Ϊ:" << randNum << endl;
		}
		else if (num>randNum)
		{
			cout << "�´���" << endl;
		}
		else
		{
			cout << "��С��" << endl;
		}
	}
}
#include <iostream>
using namespace std;

int main() {
	//��ά����������������ʽ,���� ->��Ӧ���������
	//��һ��
	int arr1[2][3];
	//δ��ʼ��ʱ��ֵ
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << arr1[i][j] << " "; //-858993460
		}
		cout << endl;
	}
	arr1[0][0] = 1;
	arr1[0][1] = 2;
	arr1[0][2] = 3;
	arr1[1][0] = 4;
	arr1[1][1] = 5;
	arr1[1][2] = 6;
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << arr1[i][j] << " ";
		}
		cout << endl;
	}

	//�ڶ���
	int arr2[2][3] = { {1,2,3},{4,5,6} }; //��������ʼ����ע��[][]���ܲ�д��С����java���ǿ��Ե�
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << arr2[i][j] << " ";
		}
		cout << endl;
	}

	//������
	int arr3[2][3] = { 1,2,3,4,5,6 }; //��ʽ�ƶ�
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << arr3[i][j] << " ";
		}
		cout << endl;
	}

	//������
	int arr4[][3] = { 1,2,3,4,5,6 }; //��ʽ�ƶ�
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << arr4[i][j] << " ";
		}
		cout << endl;
	}

	//int arr5[2][] = {1,2,3,4,5,6}; //һ��Ҫд�������޷�ʵ���Զ��ƶ�
}
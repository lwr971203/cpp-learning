#include	<iostream>
using namespace std;

//ð������
void BubbleSort(int* arr, int length) {
	for (int i = 0; i < length - 1; i++)
	{
		for (int j = 0; j < length - 1 - i; j++)
		{
			if (arr[j] > arr[j + 1])
			{
				/*int temp = arr[j];
				arr[j] = arr[j + 1];
				arr[j + 1] = temp;*/
				arr[j] = arr[j] + arr[j + 1];
				arr[j + 1] = arr[j] - arr[j + 1];
				arr[j] = arr[j] - arr[j + 1];
			}
		}
	}
}

//��ӡһ������
void PrintArray(int* arr, int length) {
	for (int i = 0; i < length; i++)
	{
		cout << arr[i] << endl;
	}
}

void main() {
	int numbers[] = { 45,13,78,23,46,1,54,24,65,32,67,25,21,16,38 };

	int length = sizeof(numbers) / sizeof(numbers[0]);

	//��length��ʱ���мǲ�Ҫ��sizeof���ڳ���ָ��
	//����
	//const int* const arr = numbers;
	//int len = sizeof(arr) / sizeof(arr[0]); //�õ���len��2,��Ϊsizeofʶ����ָ��ʱ��ʾָ���СΪ8�ֽ�

	BubbleSort(numbers, length);
	PrintArray(numbers, length);
}
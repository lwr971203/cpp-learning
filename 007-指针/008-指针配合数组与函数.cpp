#include	<iostream>
using namespace std;

//冒泡排序
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

//打印一下数组
void PrintArray(int* arr, int length) {
	for (int i = 0; i < length; i++)
	{
		cout << arr[i] << endl;
	}
}

void main() {
	int numbers[] = { 45,13,78,23,46,1,54,24,65,32,67,25,21,16,38 };

	int length = sizeof(numbers) / sizeof(numbers[0]);

	//求length的时候切记不要将sizeof用于常规指针
	//例如
	//const int* const arr = numbers;
	//int len = sizeof(arr) / sizeof(arr[0]); //得到的len是2,因为sizeof识别常量指针时表示指针大小为8字节

	BubbleSort(numbers, length);
	PrintArray(numbers, length);
}
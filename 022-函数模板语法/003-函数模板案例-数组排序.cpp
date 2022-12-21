#include <iostream>
using namespace std;

template<typename T>
void Swap(T& a, T& b) {
	T temp = a;
	a = b;
	b = temp;
}


template<typename T>
void SelectSort(T arr[], int len) {
	for (int i = 0; i < len - 1; i++)
	{
		int maxIndex = i;
		for (int j = i + 1; j < len; j++)
		{
			if (arr[maxIndex] < arr[j])
			{
				maxIndex = j;
			}
		}

		if (maxIndex != i)
		{
			Swap(arr[maxIndex], arr[i]);
		}
	}
}

template<class T>
void PrintArray(T arr[], int len) {
	for (int i = 0; i < len; i++)
	{
		cout << arr[i] << " ";
	}
	cout << endl;
}

int main() {
	char cArr[] = "abcdefhjklmn";
	int len = sizeof(cArr) / sizeof(cArr[0]);
	SelectSort(cArr, len);
	PrintArray(cArr, len);

	int nums[] = { 112,241,153,14,125,65,25,124,267,367,65,14,12 };
	len = sizeof(nums) / sizeof(nums[0]);
	SelectSort(nums, len);
	PrintArray(nums, len);


}
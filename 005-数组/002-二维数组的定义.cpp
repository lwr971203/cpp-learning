#include <iostream>
using namespace std;

int main() {
	//二维数组可以联想矩阵形式,且行 ->对应层外层数组
	//第一种
	int arr1[2][3];
	//未初始化时的值
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

	//第二种
	int arr2[2][3] = { {1,2,3},{4,5,6} }; //声明并初始化，注意[][]不能不写大小，在java中是可以的
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << arr2[i][j] << " ";
		}
		cout << endl;
	}

	//第三种
	int arr3[2][3] = { 1,2,3,4,5,6 }; //隐式推断
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << arr3[i][j] << " ";
		}
		cout << endl;
	}

	//第四种
	int arr4[][3] = { 1,2,3,4,5,6 }; //隐式推断
	for (int i = 0; i < 2; i++)
	{
		for (int j = 0; j < 3; j++)
		{
			cout << arr4[i][j] << " ";
		}
		cout << endl;
	}

	//int arr5[2][] = {1,2,3,4,5,6}; //一定要写列数，无法实现自动推断
}
#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
using namespace std;

void Print(int v) {
	cout << v << " ";
}
int main() {

	//Ϊ�������ݸ���ʵ������������
	srand((unsigned int)time(NULL));

	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	//������ҡ�ϴ��
	random_shuffle(v.begin(), v.end());
	for_each(v.begin(), v.end(), Print);
}
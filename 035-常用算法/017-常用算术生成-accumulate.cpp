#include <iostream>
#include <vector>
#include <numeric> //����ǰ������ͷ�ļ���
using namespace std;

int main() {
	vector<int> v;
	for (int i = 0; i <=100; i++)
	{
		v.push_back(i);
	}

	int total=accumulate(v.begin(),v.end(),50); //���һ��������ʾ��ʼ�ۼ�ֵ
	cout << "�ۼ��ܺ�Ϊ: " << total << endl;
}
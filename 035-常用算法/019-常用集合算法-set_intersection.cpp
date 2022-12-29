#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void Print(int a) {
	cout << a << " ";
}
int main() {
	vector<int> v1, v2;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
		v2.push_back(i+2);
	}

	vector<int> target;
	//���ٿռ�ͨ���������⣬Ҳ����ȡv1��v2֮��Ľ�С��
	target.resize(min(v1.size(),v2.size()));
	//ȡ���������ý����ŵ���һ����������
	vector<int>::iterator iEnd=set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), target.begin()); //���ؽ�������ֹ������
	//for_each����ʱ��ֹ��������Ҫ��target.end()  ��Ϊ����ƫ����
	for_each(target.begin(), iEnd, Print);
}
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void Print(int a) {
	cout << a << " ";
}
int main() {
	vector<int> v1,v2;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
		v2.push_back(i+5);
	}

	vector<int> target;
	//ͨ����������,��ȡ����size֮��
	target.resize(v1.size() + v2.size());
	//ȡ�����������ŵ�������
	vector<int>::iterator iEnd=set_union(v1.begin(), v1.end(), v2.begin(), v2.end(), target.begin());
	for_each(target.begin(), iEnd, Print);
}
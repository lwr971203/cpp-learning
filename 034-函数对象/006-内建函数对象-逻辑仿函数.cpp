#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;

int main() {
	vector<bool> v;
	v.push_back(true);
	v.push_back(false);
	v.push_back(true);
	v.push_back(false);

	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
	}
	cout << endl;

	vector<bool> v2;
	v2.resize(v.size());
	//�������������������
	transform(v.begin(), v.end(), v2.begin(), logical_not<bool>()); //���һ��������ʾ���˵Ĺ�������Щʲô��
	
	for (int i = 0; i < v2.size(); i++)
	{
		cout << v2[i] << " ";
	}
}
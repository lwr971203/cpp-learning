#include<iostream>
#include <vector>
using namespace std;

int main() {
	vector<int> v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	//获取第一个
	cout << v1.front() << endl;
	//获取最后一个
	cout << v1.back() << endl;
	//用索引或者at
	for (int i = 0; i < v1.size(); i++)
	{
		cout << v1[i] << " ";
	}
	cout << endl;
	for (int i = 0; i < v1.size(); i++)
	{
		cout << v1.at(i) << " ";
	}
}
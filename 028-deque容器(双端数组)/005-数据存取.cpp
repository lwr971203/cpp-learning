#include <iostream>
#include <deque>
using namespace std;

int main() {
	deque<int> d;
	d.push_back(10);
	d.push_back(20);
	d.push_back(30);
	d.push_back(40);
	d.push_back(50);
	d.push_back(60);
	//拿到第一个元素
	cout << "第一个元素为: " << d.front() << endl;
	//拿到第二个元素
	cout << "第二个元素为: " << d.back() << endl;
	//利用索引或者at
	for (int i = 0; i < d.size(); i++)
	{
		cout << d[i] << endl;
	}
	for (int i = 0; i < d.size(); i++)
	{
		cout << d.at(i) << endl;
	}
}
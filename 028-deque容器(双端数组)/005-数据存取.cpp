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
	//�õ���һ��Ԫ��
	cout << "��һ��Ԫ��Ϊ: " << d.front() << endl;
	//�õ��ڶ���Ԫ��
	cout << "�ڶ���Ԫ��Ϊ: " << d.back() << endl;
	//������������at
	for (int i = 0; i < d.size(); i++)
	{
		cout << d[i] << endl;
	}
	for (int i = 0; i < d.size(); i++)
	{
		cout << d.at(i) << endl;
	}
}
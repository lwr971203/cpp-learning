#include<iostream>
#include <deque>
using namespace std;

void PrintDeque(const deque<int>& d) {
	for (deque<int>::const_iterator i = d.begin(); i != d.end(); i++)
	{
		cout << *i << " ";
	}
	cout << endl;
}

int main() {
	deque<int> d1;
	for (int i = 0; i < 10; i++)
	{
		d1.push_back(i);
	}
	if (d1.empty())
	{
		cout << "d1 �ǿյ�" << endl;
	}
	else {
		cout << "d1 ���ǿյ� " << endl;
		cout << "d1 ��sizeΪ: " << d1.size() << endl;
		//ע��deque��û������������Ե�
	}

	//����ָ����С,��vector��resize����ȫһ����, ��׸��
}
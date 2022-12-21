#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

void Print(int item) {
	cout << item << endl;
}

int main() {
	vector<int> myVector;
	myVector.push_back(10);
	myVector.push_back(20);
	myVector.push_back(30);
	myVector.push_back(40);
	myVector.push_back(50);

	//��һ�ֱ�����ʽ
	vector<int>::iterator first = myVector.begin(); //һ��ʼָ���һ��Ԫ�ص�ָ��
	vector<int>::iterator end = myVector.end(); //ָ�����һ��Ԫ�ص���һ��Ԫ�ص�ָ��
	while (first!=end)
	{
		cout << *first << endl;
		first++;
	}

	//�ڶ��ֱ�����ʽ
	for (vector<int>::iterator i = myVector.begin()	; i !=myVector.end(); i++)
	{
		cout << *i << endl;
	}

	//�����ֱ�����ʽ
	for_each(myVector.begin(),myVector.end(), Print); //STL�����㷨������ı�������
}

#include <iostream>
using namespace std;
#include <vector> //Ҫ��STL���������Ӧ��ͷ�ļ�
#include <algorithm> //algorithm��STL�еı�׼�㷨��, ֻҪ�õ�������㷨������������ͷ�ļ�

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

	//��һ�ֱ�����ʽ�������vector<int> :: iterator���Կ���һ����
	vector<int>::iterator first = myVector.begin(); //һ��ʼָ���һ��Ԫ�ص�ָ��
	vector<int>::iterator end = myVector.end(); //ָ�����һ��Ԫ�ص���һ��Ԫ�ص�ָ��
	while (first != end)
	{
		cout << *first << endl; //���*�������������Ǳ�������
		first++;
	}

	//�ڶ��ֱ�����ʽ
	for (vector<int>::iterator i = myVector.begin(); i != myVector.end(); i++)
	{
		cout << *i << endl;
	}

	//�����ֱ�����ʽ
	for_each(myVector.begin(), myVector.end(), Print); //STL��׼�㷨������ı�������
}

#include <iostream>
#include<vector>
using namespace std;

void printVector(vector<int>& v) {
	for (vector<int>::iterator i = v.begin(); i != v.end(); i++)
	{
		cout << *i << " " ;
	}
	cout << endl;
}

int main() {
	vector<int> v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	//�ж��Ƿ�Ϊ��
	if (v1.empty())
	{
		cout << "v1�ǿյ�" << endl;
	}
	else {
		cout << "v1���ǿյ�" << endl;
		//vector������
		cout << "v1������: " << v1.capacity() << endl;
		cout << "v1��size: " << v1.size() << endl;
	}

	//����ָ��size,Ĭ���������ԭ����size�����0���
	v1.resize(15);
	printVector(v1);
	//��Сsize�����������Ĳ���
	v1.resize(5);
	printVector(v1);
	//���ذ汾resize() , �ڶ�������ָ������Ԫ��
	v1.resize(20, 1);
	printVector(v1);
}
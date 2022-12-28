#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<int>& v) {
	for (vector<int>::iterator i = v.begin(); i != v.end(); i++)
	{
		cout << *i << " " ;
	}
	cout << endl;
}

void Test1() {
	vector<int> v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	printVector(v1);
	cout << "v1 �ĵ�ַΪ: " << (int)&v1 << endl;

	vector<int> v2;
	for (int i = 10; i > 0; i--)
	{
		v2.push_back(i);
	}
	printVector(v2);
	cout << "v2 �ĵ�ַΪ: " << (int)&v2 << endl;

	v1.swap(v2);
	printVector(v1);
	printVector(v2);
	cout << "v1 �ĵ�ַΪ: " << (int)&v1 << endl; //��ַ��û�з����ı�
	cout << "v2 �ĵ�ַΪ: " << (int)&v2 << endl; //��ַ��û�з����ı�
}

//��swap���������ڴ�
void Test2() {
	vector<int> v1;
	for (int i = 0; i < 100000; i++)
	{
		v1.push_back(i);
	}
	cout << "v1 ������Ϊ: " << v1.capacity() << endl;
	cout << "v1 ��sizeΪ: " << v1.size() << endl;

	//����ָ��size������ı�����,����˷�
	v1.resize(5);
	cout << "v1 ������Ϊ: " << v1.capacity() << endl;
	cout << "v1 ��sizeΪ: " << v1.size() << endl;

	//��������������swap���ﵽ�����ڴ��Ч��
	vector<int>(v1).swap(v1); //����������������v1��size���п�������,Ȼ����ִ��swap
	cout << "v1 ������Ϊ: " << v1.capacity() << endl;
	cout << "v1 ��sizeΪ: " << v1.size() << endl;
}

int main() {
	Test1();
	Test2();
}
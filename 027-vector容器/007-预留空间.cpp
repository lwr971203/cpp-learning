#include <iostream>
#include <vector>
using namespace std;

//Ԥ���ռ���Ǳ����ռ�, �ǲ��ܷ��ʵ�, ר�������ṩ����̬���ݵ�
int main() {
	vector<int> v1;
	int count1 = 0;
	int* p1 = NULL;
	for (int i = 0; i < 100000; i++)
	{
		v1.push_back(i);
		//���ָ��ָ��ĵ�һ��Ԫ�ص�ַ����,˵��������һ�ζ�̬����
		if (p1 != &v1[0])
		{
			p1 = &v1[0];
			count1++;
		}
	}
	cout << "һ�������� " << count1 << " ���ڴ�" << endl; //30��

	vector<int> v2;
	v2.reserve(100000);
	int count2 = 0;
	int* p2 = NULL;
	for (int i = 0; i < 100000; i++)
	{
		v2.push_back(i);
		//���ָ��ָ��ĵ�һ��Ԫ�ص�ַ����,˵��������һ�ζ�̬����
		if (p2 != &v2[0])
		{
			p2 = &v2[0];
			count2++;
		}
	}
	cout << "һ�������� " << count2 << " ���ڴ�" << endl; //1��
}
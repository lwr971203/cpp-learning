#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*
adjacent_find(iterator beg, iterator end);  `

// ���������ظ�Ԫ��,��������Ԫ�صĵ�һ��λ�õĵ�����

// beg ��ʼ������

// end ����������
*/

int main() {
	vector<int> v;
	v.push_back(1);
	v.push_back(2);
	v.push_back(5);
	v.push_back(2);
	v.push_back(4);
	v.push_back(4);
	v.push_back(3);

	vector<int>::iterator i=adjacent_find(v.begin(),v.end());
	if (i != v.end())
	{
		cout << "�ҵ��� " << endl;
	}
}
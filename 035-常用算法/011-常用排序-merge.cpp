#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*
merge(iterator beg1, iterator end1, iterator beg2, iterator end2, iterator dest);  `

// ����Ԫ�غϲ������洢����һ������

// ע��: ��������������**�����**  �ϲ�֮��Ҳ�������

// beg1   ����1��ʼ������
// end1   ����1����������
// beg2   ����2��ʼ������
// end2   ����2����������
// dest    Ŀ��������ʼ������
*/

void Print(int v) {
	cout << v << " ";
}
int main() {
	vector<int> v1, v2;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
		v2.push_back(i+3);
	}

	vector<int> target;
	//�漰�����˵��������ò�������Ҫ�ȿ��ٿռ�
	target.resize(v1.size()+ v2.size());
	merge(v1.begin(), v1.end(), v2.begin(), v2.end(), target.begin());
	for_each(target.begin(),target.end(),Print);
}
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

int main() {
	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}
	//���ֲ���ֻ��ȷ���Ƿ����, ����ֻ������������. ����������ʧЧ
	bool res=binary_search(v.begin(),v.end(),5);
	if (res)
	{
		cout << "�ҵ���" << endl;
	}
}
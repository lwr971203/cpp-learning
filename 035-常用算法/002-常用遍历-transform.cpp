#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Transform
{
public:
	//�����Ǳ���ʱ��ֵ, ����ֵ�ǰ��˺�Ľ��
	int operator()(int v) {
		return v + 100;
	}
};

void Print(int v) {
	cout << v << " ";
}

int main() {
	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	
	vector<int> v1;
	//Ҫ����֮ǰ���뿪�ٺÿռ�
	v1.resize(v.size());
	//ǰ����������Դ����ʼ����ֹ, ������������Ŀ�����ʼ, ���һ�������ǰ��˵Ĺ�������Ҫ��ʲô����
	transform(v.begin(), v.end(), v1.begin(), Transform());
	for_each(v1.begin(), v1.end(), Print);
}
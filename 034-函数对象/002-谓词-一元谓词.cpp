#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*
- ����bool���͵ķº�����Ϊ**ν��**
- ���operator()����һ����������ô����һԪν��
- ���operator()����������������ô������Ԫν��
*/

struct GreaterFive {
	bool operator()(int val) {
		return val > 5;
	}
};

int main() {
	vector<int> v;
	for (int  i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	vector<int>::iterator i=find_if(v.begin(),v.end(),GreaterFive());
	if (i!=v.end())
	{
		cout << "�ҵ���: " << *i << endl;
	}
}
#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

class MyCompare {
public: //��������С����ʱ,����������η�û��ʲôӰ��
	bool operator()(int v1, int v2) {
		return v1 > v2;
	}
};

int main() {
	vector<int> v;
	for (int  i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	sort(v.begin(),v.end(),MyCompare());

	for (int i = 0; i < 10; i++)
	{
		cout << v[i] << " ";
	}
}
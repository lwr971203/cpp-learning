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
	//二分查找只能确定是否存在, 而且只能找有序序列. 如果无序得则失效
	bool res=binary_search(v.begin(),v.end(),5);
	if (res)
	{
		cout << "找到了" << endl;
	}
}
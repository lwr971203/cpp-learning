#include <iostream>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;

int main() {
	vector<bool> v;
	v.push_back(true);
	v.push_back(false);
	v.push_back(true);
	v.push_back(false);

	for (int i = 0; i < v.size(); i++)
	{
		cout << v[i] << " ";
	}
	cout << endl;

	vector<bool> v2;
	v2.resize(v.size());
	//这个函数可以用来搬运
	transform(v.begin(), v.end(), v2.begin(), logical_not<bool>()); //最后一个参数表示搬运的过程中做些什么事
	
	for (int i = 0; i < v2.size(); i++)
	{
		cout << v2[i] << " ";
	}
}
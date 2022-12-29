#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void Print(int a) {
	cout << a << " ";
}
int main() {
	vector<int> v1, v2;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
		v2.push_back(i+2);
	}

	vector<int> target;
	//开辟空间通常考虑特殊，也就是取v1和v2之间的较小者
	target.resize(min(v1.size(),v2.size()));
	//取两个容器得交集放到另一个新容器中
	vector<int>::iterator iEnd=set_intersection(v1.begin(), v1.end(), v2.begin(), v2.end(), target.begin()); //返回交集得终止迭代器
	//for_each遍历时终止迭代器不要用target.end()  因为可能偏大了
	for_each(target.begin(), iEnd, Print);
}
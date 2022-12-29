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
		v2.push_back(i+5);
	}

	vector<int> target;
	//通常考虑特殊, 即取容器的较大者
	target.resize(max(v1.size(), v2.size()));
	//取v1有v2无的差集放到新容器
	vector<int>::iterator iEnd=set_difference(v1.begin(), v1.end(), v2.begin(), v2.end(), target.begin());
	for_each(target.begin(), iEnd, Print);

	cout << endl;

	//取v2有v1无的差集放到容器
	iEnd = set_difference(v2.begin(), v2.end(), v1.begin(), v1.end(), target.begin()); 
	for_each(target.begin(), iEnd, Print);
}
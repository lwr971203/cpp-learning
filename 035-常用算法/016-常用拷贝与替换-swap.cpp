#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void Print(int v) {
	cout << v << " ";
}
int main() {
	vector<int> v1, v2;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
		v2.push_back(i + 200);
	}

	//交换两个同类型得容器里面得元素
	swap(v1, v2);
	for_each(v1.begin(),v1.end(),Print);
	cout << endl;
	for_each(v2.begin(),v2.end(),Print);
}
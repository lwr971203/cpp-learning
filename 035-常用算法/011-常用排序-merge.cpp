#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

/*
merge(iterator beg1, iterator end1, iterator beg2, iterator end2, iterator dest);  `

// 容器元素合并，并存储到另一容器中

// 注意: 两个容器必须是**有序的**  合并之后也是有序得

// beg1   容器1开始迭代器
// end1   容器1结束迭代器
// beg2   容器2开始迭代器
// end2   容器2结束迭代器
// dest    目标容器开始迭代器
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
	//涉及到搬运到新容器得操作都需要先开辟空间
	target.resize(v1.size()+ v2.size());
	merge(v1.begin(), v1.end(), v2.begin(), v2.end(), target.begin());
	for_each(target.begin(),target.end(),Print);
}
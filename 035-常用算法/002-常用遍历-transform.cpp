#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Transform
{
public:
	//参数是遍历时的值, 返回值是搬运后的结果
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
	//要搬运之前必须开辟好空间
	v1.resize(v.size());
	//前两个参数是源的起始与终止, 第三个参数是目标的起始, 最后一个参数是搬运的过程中需要做什么操作
	transform(v.begin(), v.end(), v1.begin(), Transform());
	for_each(v1.begin(), v1.end(), Print);
}
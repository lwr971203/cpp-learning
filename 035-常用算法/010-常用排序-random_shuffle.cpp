#include <iostream>
#include <vector>
#include <algorithm>
#include <ctime>
using namespace std;

void Print(int v) {
	cout << v << " ";
}
int main() {

	//为了让数据更真实添加随机数种子
	srand((unsigned int)time(NULL));

	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	//随机打乱、洗牌
	random_shuffle(v.begin(), v.end());
	for_each(v.begin(), v.end(), Print);
}
#include <iostream>
#include <vector>
#include <numeric> //这次是包含这个头文件了
using namespace std;

int main() {
	vector<int> v;
	for (int i = 0; i <=100; i++)
	{
		v.push_back(i);
	}

	int total=accumulate(v.begin(),v.end(),50); //最后一个参数表示起始累加值
	cout << "累计总和为: " << total << endl;
}
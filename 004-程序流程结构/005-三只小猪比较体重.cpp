#include <iostream>
using namespace std;	

int main() {
	int aWeight = 0;
	int bWeight = 0;
	int cWeight = 0;

	cout << "请输入小猪A的体重" << endl;
	cin >> aWeight;
	cout << "请输入小猪B的体重" << endl;
	cin >> bWeight;
	cout << "请输入小猪C的体重" << endl;
	cin >> cWeight;

	cout << "小猪A的体重:" << aWeight << endl;
	cout << "小猪B的体重:" << bWeight << endl;
	cout << "小猪C的体重:" << cWeight << endl;

	int maxWeight = aWeight;
	if (aWeight<bWeight)
	{
		maxWeight = bWeight;
	}

	if (maxWeight<cWeight)
	{
		maxWeight = cWeight;
	}

	cout << "最重的小猪体重为:" << maxWeight << endl;
}
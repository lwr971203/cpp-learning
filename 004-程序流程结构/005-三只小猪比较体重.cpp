#include <iostream>
using namespace std;	

int main() {
	int aWeight = 0;
	int bWeight = 0;
	int cWeight = 0;

	cout << "������С��A������" << endl;
	cin >> aWeight;
	cout << "������С��B������" << endl;
	cin >> bWeight;
	cout << "������С��C������" << endl;
	cin >> cWeight;

	cout << "С��A������:" << aWeight << endl;
	cout << "С��B������:" << bWeight << endl;
	cout << "С��C������:" << cWeight << endl;

	int maxWeight = aWeight;
	if (aWeight<bWeight)
	{
		maxWeight = bWeight;
	}

	if (maxWeight<cWeight)
	{
		maxWeight = cWeight;
	}

	cout << "���ص�С������Ϊ:" << maxWeight << endl;
}
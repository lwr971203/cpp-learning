#include <iostream>
#include <algorithm>
#include <vector>
using namespace std;

void Print1(int v) {
	cout << v << " ";
}

struct MyPrint
{
public:
	void operator()(int v) {
		cout << v << " ";
	}
};

void main() {
	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	for_each(v.begin(),v.end(),Print1);

	cout << endl;

	for_each(v.begin(), v.end(), MyPrint());
}
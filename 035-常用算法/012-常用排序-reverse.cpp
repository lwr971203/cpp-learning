#include<iostream>
#include <vector>
#include <algorithm>
using namespace std;

void Print(int v) {
	cout << v << " ";
}
int main() {
	vector<int> v;
	for (int i = 0; i < 10; i++)
	{
		v.push_back(i);
	}

	reverse(v.begin(), v.end());
	for_each(v.begin(),v.end(),Print);
}
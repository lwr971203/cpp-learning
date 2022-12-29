#include <iostream>
#include <vector>
#include <numeric>
#include <algorithm>
using namespace std;

void Print(int a) {
	cout << a << " ";
}
int main() {
	vector<int> v;
	v.resize(10);

	//ÏòÈİÆ÷Ìî³ä
	fill(v.begin(),v.end(),200);
	for_each(v.begin(),v.end(),Print);
}
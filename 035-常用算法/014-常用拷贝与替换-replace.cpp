#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

void Print(int v) {
	cout << v << " ";
}
int main() {
	vector<int> v;
	v.push_back(20);
	v.push_back(30);
	v.push_back(20);
	v.push_back(40);
	v.push_back(50);
	v.push_back(10);
	v.push_back(20);

	//����������������þ�ֵ�滻����ֵ
	replace(v.begin(), v.end(), 20, 2000);
	for_each(v.begin(), v.end(), Print);
}
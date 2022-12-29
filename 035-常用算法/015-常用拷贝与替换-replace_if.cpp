#include <iostream>
#include <vector>
#include <algorithm>
using namespace std;

struct Geater30
{
public:
	bool operator()(int v) {
		if (v > 30)
			return true;
		return false;
	}
};

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

	//将区间内所有满足得旧值替换成新值
	replace_if(v.begin(), v.end(), Geater30(), 50000);
	for_each(v.begin(), v.end(), Print);
}
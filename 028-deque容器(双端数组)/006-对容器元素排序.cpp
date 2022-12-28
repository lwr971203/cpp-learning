#include <iostream>
#include <deque>
#include <algorithm>
using namespace std;

void PrintDeque(const deque<int>& d) {
	for (deque<int>::const_iterator i = d.begin(); i != d.end(); i++)
	{
		cout << *i << " ";
	}
	cout << endl;
}

int main() {
	deque<int> d;
	d.push_back(10);
	d.push_back(20);
	d.push_back(2520);
	d.push_back(8);
	d.push_back(90);
	d.push_back(200);
	d.push_back(70);
	PrintDeque(d);

	//只需要将迭代器传入, 默认是升序
	sort(d.begin(),d.end());
	PrintDeque(d);
}
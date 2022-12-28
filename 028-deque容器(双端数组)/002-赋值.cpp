#include <iostream>
#include <deque>
using namespace std;

void PrintDeque(const deque<int>& d) {
	for (deque<int>::const_iterator i = d.begin(); i != d.end(); i++)
	{
		cout << *i << " ";
	}
	cout << endl;
}


int main() {
	deque<int> d1;
	for (int i = 0; i < 10; i++)
	{
		d1.push_back(i);
	}

	//opeartor=
	deque<int> d2;
	d2 = d1;
	PrintDeque(d2);

	//区间赋值
	deque<int> d3;
	d3.assign(d2.begin(), d2.end());
	PrintDeque(d3);

	//个数赋值
	deque<int> d4;
	d4.assign(10, 1000);
	PrintDeque(d4);
}
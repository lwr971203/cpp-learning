#include<iostream>
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
	if (d1.empty())
	{
		cout << "d1 是空的" << endl;
	}
	else {
		cout << "d1 不是空的 " << endl;
		cout << "d1 的size为: " << d1.size() << endl;
		//注意deque是没有容量这个属性的
	}

	//重新指定大小,跟vector的resize是完全一样的, 不赘述
}
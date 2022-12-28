#include <iostream>
#include <list>
using namespace std;
//list 在c++ stl 中是双向循环链表

void PrintList(const list<int>& ls) {
	for (list<int>::const_iterator i = ls.begin(); i != ls.end(); i++)
	{
		cout << *i << " ";
	}
	cout << endl;
}


int main() {
	//无参构造
	list<int> ls;
	ls.push_back(10);
	ls.push_back(20);
	ls.push_back(30);
	ls.push_back(40);
	ls.push_back(50);

	PrintList(ls);

	//区间构造
	list<int> ls2(ls.begin(),ls.end());
	PrintList(ls2);

	//拷贝构造
	list<int> ls3(ls);
	PrintList(ls);
}
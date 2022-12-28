#include <iostream>
#include <list>
using namespace std;

void PrintList(const list<int>& ls) {
	for (list<int>::const_iterator i = ls.begin(); i != ls.end(); i++)
	{
		cout << *i << " ";
	}
	cout << endl;
}

//赋值
void Test1(){
	list<int> ls1;
	ls1.push_back(10);
	ls1.push_back(20);
	ls1.push_back(30);
	ls1.push_back(40);

	//operator=
	list<int> ls2 = ls1;
	PrintList(ls2);

	//区间赋值
	list<int> ls3;
	ls3.assign(ls1.begin(),ls1.end());
	PrintList(ls3);

	//个数赋值
	list<int> ls4;
	ls4.assign(10,1000);
	PrintList(ls4);
}

//交换
void Test2(){
	list<int> ls1;
	ls1.push_back(10);
	ls1.push_back(20);
	ls1.push_back(30);
	ls1.push_back(40);

	list<int> ls2;
	ls2.push_back(99);
	ls2.push_back(98);
	ls2.push_back(97);

	ls1.swap(ls2);
	PrintList(ls1);
	PrintList(ls2);
}

int main() {
	Test1();
	Test2();
}
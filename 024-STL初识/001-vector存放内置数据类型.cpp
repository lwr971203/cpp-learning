#include <iostream>
using namespace std;
#include <vector>
#include <algorithm>

void Print(int item) {
	cout << item << endl;
}

int main() {
	vector<int> myVector;
	myVector.push_back(10);
	myVector.push_back(20);
	myVector.push_back(30);
	myVector.push_back(40);
	myVector.push_back(50);

	//第一种遍历方式
	vector<int>::iterator first = myVector.begin(); //一开始指向第一个元素的指针
	vector<int>::iterator end = myVector.end(); //指向最后一个元素的下一个元素的指针
	while (first!=end)
	{
		cout << *first << endl;
		first++;
	}

	//第二种遍历方式
	for (vector<int>::iterator i = myVector.begin()	; i !=myVector.end(); i++)
	{
		cout << *i << endl;
	}

	//第三种遍历方式
	for_each(myVector.begin(),myVector.end(), Print); //STL库里算法库里面的遍历函数
}

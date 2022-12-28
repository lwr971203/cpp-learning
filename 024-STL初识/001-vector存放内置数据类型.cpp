#include <iostream>
using namespace std;
#include <vector> //要用STL必须包含对应的头文件
#include <algorithm> //algorithm是STL中的标准算法库, 只要用到里面的算法都必须包含这个头文件

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

	//第一种遍历方式：这里的vector<int> :: iterator可以看成一个类
	vector<int>::iterator first = myVector.begin(); //一开始指向第一个元素的指针
	vector<int>::iterator end = myVector.end(); //指向最后一个元素的下一个元素的指针
	while (first != end)
	{
		cout << *first << endl; //这个*操作符本质上是被重载了
		first++;
	}

	//第二种遍历方式
	for (vector<int>::iterator i = myVector.begin(); i != myVector.end(); i++)
	{
		cout << *i << endl;
	}

	//第三种遍历方式
	for_each(myVector.begin(), myVector.end(), Print); //STL标准算法库里面的遍历函数
}

#include <iostream>
#include <deque>
using namespace std;

/*
- 双端数组，可以对头端进行插入删除操作
deque与vector区别:
- vector对于头部的插入删除效率低，数据量越大，效率越低
- deque相对而言，对头部的插入删除速度回比vector快
- vector访问元素时的速度会比deque快,这和两者内部实现有关

原理: 
	deque内部分为中控器和缓冲区, 缓冲区是由很多个连续的内存空间片段.  而中控器则记录这些缓冲区中片段的地址
*/

void PrintDeque(const deque<int>& d) {
	for (deque<int>::const_iterator i = d.begin(); i != d.end(); i++)
	{
		cout << *i << " ";
	}
	cout << endl;
}

void main() {
	//无参构造
	deque<int> d1;
	for (int i = 0; i < 10; i++)
	{
		d1.push_back(i);
	}
	PrintDeque(d1);

	//区间构造
	deque<int> d2(d1.begin(),d1.end());
	PrintDeque(d2);

	//个数构造
	deque<int> d3(10, 1000);
	PrintDeque(d3);

	//拷贝构造
	deque<int> d4(d1);
	PrintDeque(d1);
}
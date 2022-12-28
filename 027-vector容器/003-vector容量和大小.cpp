#include <iostream>
#include<vector>
using namespace std;

void printVector(vector<int>& v) {
	for (vector<int>::iterator i = v.begin(); i != v.end(); i++)
	{
		cout << *i << " " ;
	}
	cout << endl;
}

int main() {
	vector<int> v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	//判断是否为空
	if (v1.empty())
	{
		cout << "v1是空的" << endl;
	}
	else {
		cout << "v1不是空的" << endl;
		//vector的容量
		cout << "v1的容量: " << v1.capacity() << endl;
		cout << "v1的size: " << v1.size() << endl;
	}

	//重新指定size,默认情况超过原来的size则会用0填充
	v1.resize(15);
	printVector(v1);
	//缩小size则会抛弃后面的部分
	v1.resize(5);
	printVector(v1);
	//重载版本resize() , 第二个参数指定填充的元素
	v1.resize(20, 1);
	printVector(v1);
}
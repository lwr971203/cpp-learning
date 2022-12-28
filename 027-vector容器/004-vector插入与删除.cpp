#include <iostream>
#include <vector>
using namespace std;

/*
- push_back(ele);`                                         //尾部插入元素ele
- `pop_back();`                                                //删除最后一个元素
- `insert(const_iterator pos, ele);`        //迭代器指向位置pos插入元素ele
- `insert(const_iterator pos, int count,ele);`//迭代器指向位置pos插入count个元素ele
- `erase(const_iterator pos);`                     //删除迭代器指向的元素
- `erase(const_iterator start, const_iterator end);`//删除迭代器从start到end之间的元素
- `clear();`                                                        //删除容器中所有元素
*/

void printVector(vector<int>& v) {
	for (vector<int>::iterator i = v.begin(); i != v.end(); i++)
	{
		cout << *i << " ";
	}
	cout << endl;
}

int main() {
	vector<int> v1;
	//尾插
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);
	v1.push_back(50);
	printVector(v1);

	//尾删
	v1.pop_back(); //一个尾插一个尾删，感觉就是栈结构
	printVector(v1);

	//给定迭代器插入
	v1.insert(v1.begin(), 1000);
	printVector(v1);
	//还可以插入多个
	v1.insert(v1.begin(),2,200);
	printVector(v1);

	//给定迭代器删除
	v1.erase(v1.begin());
	printVector(v1);

	//按区间删除
	v1.erase(v1.begin(), v1.end()); //相当于清空了
	v1.clear(); //清空
}
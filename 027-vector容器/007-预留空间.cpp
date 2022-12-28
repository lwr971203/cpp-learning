#include <iostream>
#include <vector>
using namespace std;

//预留空间就是保留空间, 是不能访问的, 专门用来提供给动态扩容的
int main() {
	vector<int> v1;
	int count1 = 0;
	int* p1 = NULL;
	for (int i = 0; i < 100000; i++)
	{
		v1.push_back(i);
		//如果指针指向的第一个元素地址变了,说明发生了一次动态扩容
		if (p1 != &v1[0])
		{
			p1 = &v1[0];
			count1++;
		}
	}
	cout << "一共开辟了 " << count1 << " 次内存" << endl; //30次

	vector<int> v2;
	v2.reserve(100000);
	int count2 = 0;
	int* p2 = NULL;
	for (int i = 0; i < 100000; i++)
	{
		v2.push_back(i);
		//如果指针指向的第一个元素地址变了,说明发生了一次动态扩容
		if (p2 != &v2[0])
		{
			p2 = &v2[0];
			count2++;
		}
	}
	cout << "一共开辟了 " << count2 << " 次内存" << endl; //1次
}
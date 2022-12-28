#include <iostream>
#include <map>
using namespace std;

void printMap(map<int, int>& m)
{
	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
	{
		//注意这里的it是pair<int,int> 的伪指针, 所以要用->first 或者是(*it).first
		cout << "key = " << it->first << " value = " << it->second << endl;
	}
	cout << endl;
}

void test01()
{
	map<int, int>m; //默认构造
	//map 容器也是二叉树结构所以也只有Insert
	m.insert(pair<int, int>(1, 10));  //c++中map比较麻烦的一点就是要专门用对组pair来插入, 而不提供常见的键,值直插
	m.insert(pair<int, int>(2, 20));
	m.insert(pair<int, int>(4, 20));
	m.insert(pair<int, int>(3, 30)); //会自动按照key排序
	printMap(m);

	map<int, int>m2(m); //拷贝构造
	printMap(m2);

	map<int, int>m3;
	m3 = m2; //赋值
	printMap(m3);
}

int main() {

	test01();

	system("pause");

	return 0;
}
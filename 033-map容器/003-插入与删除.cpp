#include <iostream>
#include <map>
using namespace std;

void printMap(map<int, int>& m)
{
	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
	{
		cout << "key = " << it->first << " value = " << it->second << endl;
	}
	cout << endl;
}

void test01()
{
	//插入
	map<int, int> m;
	//第一种插入方式
	m.insert(pair<int, int>(1, 10));
	//第二种插入方式
	m.insert(make_pair(2, 20));
	//第三种插入方式
	m.insert(map<int, int>::value_type(3, 30));
	//第四种插入方式
	m[4] = 40; //索引的方式不仅可以插入,还经常用来访问
	printMap(m);

	//C++bug
	cout << m[5] << endl; //如果没有这个key，会自动插入这个key,value = 0

	//删除
	m.erase(m.begin());
	printMap(m);

	m.erase(3); //按照key删除
	printMap(m);

	//清空
	m.erase(m.begin(), m.end());
	m.clear();
	printMap(m);
}

int main() {

	test01();

	system("pause");

	return 0;
}
#include <iostream>
#include <set>
using namespace std;

void printSet(set<int>& s)
{
	for (set<int>::iterator it = s.begin(); it != s.end(); it++)
	{
		cout << *it << " ";
	}
	cout << endl;
}

//构造和赋值
void test01()
{
	set<int> s1;

	//set容器插入只能用insert    注： 二叉树结构的都没有push之类的函数
	s1.insert(10);
	s1.insert(30);
	s1.insert(20);
	s1.insert(20);
	s1.insert(40);
	s1.insert(40);
	//插入时会自动排序,而且重复的值插入进去不生效
	printSet(s1);

	//拷贝构造
	set<int> s2(s1);
	printSet(s2);

	//赋值
	set<int> s3;
	s3 = s2;
	printSet(s3);
}

int main() {

	test01();

	system("pause");

	return 0;
}
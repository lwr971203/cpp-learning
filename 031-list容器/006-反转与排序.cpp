#include <iostream>
#include <list>
#include <algorithm>
using namespace std;

void printList(const list<int>& L) {

	for (list<int>::const_iterator it = L.begin(); it != L.end(); it++) {
		cout << *it << " ";
	}
	cout << endl;
}

bool myCompare(int val1, int val2)
{
	// 降序 前一个大与后一个时返回true
	return val1 > val2;
}

//反转和排序
void test01()
{
	list<int> L;
	L.push_back(90);
	L.push_back(30);
	L.push_back(20);
	L.push_back(70);
	printList(L);

	//反转容器的元素
	L.reverse();
	printList(L);

	//排序

	//错误示范: 所有不支持随机访问迭代器的容器,不可以用标准算法 ... 但是这类容器, 内部会提供对应的成员方法
	//sort(L.begin(),L.end()); //编译不错,但运行时出错

	//只能使用它的成员函数
	L.sort(); //默认的排序规则 从小到大
	printList(L);

	L.sort(myCompare); //指定规则，从大到小
	printList(L);
}

int main() {

	test01();

	system("pause");

	return 0;
}
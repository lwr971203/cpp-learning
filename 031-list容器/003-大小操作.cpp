#include <iostream>
#include <list>
using namespace std;

int main() {
	list<int> ls;
	ls.push_back(10);
	ls.push_back(20);
	ls.push_back(30);
	ls.push_back(40);

	if (!ls.empty())
	{
		cout << "list 的size为: " << ls.size() << endl;
	}

	//重新指定大小resize 还是跟vector一样..  不赘述
}
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
		cout << "list ��sizeΪ: " << ls.size() << endl;
	}

	//����ָ����Сresize ���Ǹ�vectorһ��..  ��׸��
}
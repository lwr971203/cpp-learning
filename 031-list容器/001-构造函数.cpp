#include <iostream>
#include <list>
using namespace std;
//list ��c++ stl ����˫��ѭ������

void PrintList(const list<int>& ls) {
	for (list<int>::const_iterator i = ls.begin(); i != ls.end(); i++)
	{
		cout << *i << " ";
	}
	cout << endl;
}


int main() {
	//�޲ι���
	list<int> ls;
	ls.push_back(10);
	ls.push_back(20);
	ls.push_back(30);
	ls.push_back(40);
	ls.push_back(50);

	PrintList(ls);

	//���乹��
	list<int> ls2(ls.begin(),ls.end());
	PrintList(ls2);

	//��������
	list<int> ls3(ls);
	PrintList(ls);
}
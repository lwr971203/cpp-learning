#include <iostream>
#include <map>
using namespace std;

void printMap(map<int, int>& m)
{
	for (map<int, int>::iterator it = m.begin(); it != m.end(); it++)
	{
		//ע�������it��pair<int,int> ��αָ��, ����Ҫ��->first ������(*it).first
		cout << "key = " << it->first << " value = " << it->second << endl;
	}
	cout << endl;
}

void test01()
{
	map<int, int>m; //Ĭ�Ϲ���
	//map ����Ҳ�Ƕ������ṹ����Ҳֻ��Insert
	m.insert(pair<int, int>(1, 10));  //c++��map�Ƚ��鷳��һ�����Ҫר���ö���pair������, �����ṩ�����ļ�,ֱֵ��
	m.insert(pair<int, int>(2, 20));
	m.insert(pair<int, int>(4, 20));
	m.insert(pair<int, int>(3, 30)); //���Զ�����key����
	printMap(m);

	map<int, int>m2(m); //��������
	printMap(m2);

	map<int, int>m3;
	m3 = m2; //��ֵ
	printMap(m3);
}

int main() {

	test01();

	system("pause");

	return 0;
}
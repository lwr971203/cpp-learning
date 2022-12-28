#include <iostream>
#include <deque>
using namespace std;

/*
- ˫�����飬���Զ�ͷ�˽��в���ɾ������
deque��vector����:
- vector����ͷ���Ĳ���ɾ��Ч�ʵͣ�������Խ��Ч��Խ��
- deque��Զ��ԣ���ͷ���Ĳ���ɾ���ٶȻر�vector��
- vector����Ԫ��ʱ���ٶȻ��deque��,��������ڲ�ʵ���й�

ԭ��: 
	deque�ڲ���Ϊ�п����ͻ�����, ���������ɺܶ���������ڴ�ռ�Ƭ��.  ���п������¼��Щ��������Ƭ�εĵ�ַ
*/

void PrintDeque(const deque<int>& d) {
	for (deque<int>::const_iterator i = d.begin(); i != d.end(); i++)
	{
		cout << *i << " ";
	}
	cout << endl;
}

void main() {
	//�޲ι���
	deque<int> d1;
	for (int i = 0; i < 10; i++)
	{
		d1.push_back(i);
	}
	PrintDeque(d1);

	//���乹��
	deque<int> d2(d1.begin(),d1.end());
	PrintDeque(d2);

	//��������
	deque<int> d3(10, 1000);
	PrintDeque(d3);

	//��������
	deque<int> d4(d1);
	PrintDeque(d1);
}
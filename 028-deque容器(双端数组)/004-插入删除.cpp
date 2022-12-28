#include <iostream>
#include <deque>
using namespace std;

void PrintDeque(const deque<int>& d) {
	for (deque<int>::const_iterator i = d.begin(); i != d.end(); i++)
	{
		cout << *i << " ";
	}
	cout << endl;
}

void Test1(){
	deque<int> d1;
	//ͷ��
	d1.push_front(10);
	PrintDeque(d1);
	//β��
	d1.push_back(20);
	d1.push_back(30);
	d1.push_back(40);
	PrintDeque(d1);
	//ͷɾ
	d1.pop_front();
	PrintDeque(d1);
	//βɾ
	d1.pop_back();
	PrintDeque(d1);
}

//insert
void Test2() {
	deque<int> d;
	d.push_back(10);
	d.push_back(20);
	d.push_front(100);
	d.push_front(200);
	PrintDeque(d);

	//�õ�����,����
	deque<int>::iterator i1 = d.begin();
	i1++;
	d.insert(i1,666);
	PrintDeque(d);

	//������
	//d.insert(i1,2,99); //�ظ�ʹ��ͬһ����������������.... �����������õ��������ܻ������ݶ�ʧЧ
	deque<int>::iterator i2 = d.begin();
	i2 += 3;
	d.insert(i2,3,999);
	PrintDeque(d);

	//����(����ҿ�)����
	deque<int> d2;
	d2.push_back(1);
	d2.push_back(2);
	d2.push_back(3);
	d.insert(d.begin(),d2.begin()+1,d2.end());
	PrintDeque(d);
}

int main() {
	//Test1();
	Test2();
}
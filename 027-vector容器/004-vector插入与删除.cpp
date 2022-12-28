#include <iostream>
#include <vector>
using namespace std;

/*
- push_back(ele);`                                         //β������Ԫ��ele
- `pop_back();`                                                //ɾ�����һ��Ԫ��
- `insert(const_iterator pos, ele);`        //������ָ��λ��pos����Ԫ��ele
- `insert(const_iterator pos, int count,ele);`//������ָ��λ��pos����count��Ԫ��ele
- `erase(const_iterator pos);`                     //ɾ��������ָ���Ԫ��
- `erase(const_iterator start, const_iterator end);`//ɾ����������start��end֮���Ԫ��
- `clear();`                                                        //ɾ������������Ԫ��
*/

void printVector(vector<int>& v) {
	for (vector<int>::iterator i = v.begin(); i != v.end(); i++)
	{
		cout << *i << " ";
	}
	cout << endl;
}

int main() {
	vector<int> v1;
	//β��
	v1.push_back(10);
	v1.push_back(20);
	v1.push_back(30);
	v1.push_back(40);
	v1.push_back(50);
	printVector(v1);

	//βɾ
	v1.pop_back(); //һ��β��һ��βɾ���о�����ջ�ṹ
	printVector(v1);

	//��������������
	v1.insert(v1.begin(), 1000);
	printVector(v1);
	//�����Բ�����
	v1.insert(v1.begin(),2,200);
	printVector(v1);

	//����������ɾ��
	v1.erase(v1.begin());
	printVector(v1);

	//������ɾ��
	v1.erase(v1.begin(), v1.end()); //�൱�������
	v1.clear(); //���
}
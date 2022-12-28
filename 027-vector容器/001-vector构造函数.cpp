#include <iostream>
using namespace std;
#include <vector>

/*
vector�����൱��C#�е�List���Զ�̬���ݵ�����
- vector<T> v; `               		     //����ģ��ʵ����ʵ�֣�Ĭ�Ϲ��캯��
- `vector(v.begin(), v.end());   `       //��v[begin(), end())�����е�Ԫ�ؿ���������
- `vector(n, elem);`                            //���캯����n��elem����������
- `vector(const vector &vec);`         //�������캯����
*/
void printVector(vector<int>& v1) {
	for (vector<int>::iterator i = v1.begin(); i != v1.end(); i++)
	{
		cout << *i << " ";
	}
	cout << endl;
}
int main() {
	//�޲ι���
	vector<int> v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	printVector(v1);

	//ͨ������ķ�ʽ����
	vector<int> v2(v1.begin(),v1.end()); //ע��������ҿ�����
	printVector(v2);

	//n��elem�Ĺ��췽ʽ
	vector<int> v3(10, 100);
	printVector(v3);
}
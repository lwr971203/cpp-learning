#include <iostream>
using namespace std;

int* Func() {
	return new int(10);
}

void Test1() {
	int *p = Func();
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;
	cout << *p << endl;

	//����delete�������ͷ�ָ��ָ��Ķ��ڴ�
	delete p;

	//��ȥ�����þͻᱨ���ˣ���Ϊ�ڴ��Ѿ����ͷ�
	//cout << *p << endl;
}

void Test2() {
	//ͨ��new����������һ�������Ķ��ڴ棨���飩
	int *arr = new int[100]; //�����׵�ַ,C++ȫ��ͳһ����ʽ������д��������?
	//int arr1[] = new int[200]; //����,���˸�����,C++�﷨���䲻ͳһ,���Ҳ���
	for (int i = 0; i < 100; i++)
	{
		arr[i] = i;
	}

	for (int i = 0; i < 100; i++)
	{
		cout << arr[i] << endl;
	}

	//�ͷ������ʱ��Ҫ��[]����Ϊ����֪�����ͷŵ���һ���������ڴ�
	delete[] arr; //��Ȼ����[]��������ѧ,������ô֪�����������ڴ�ռ��м�������Ԫ��

	//��ȥ���ʾ��Ǳ�����
	for (int i = 0; i < 100; i++)
	{
		cout << arr[i] << endl;
	}
}
int main() {
	//Test1();

	Test2();
}
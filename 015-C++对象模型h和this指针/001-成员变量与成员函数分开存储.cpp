#include <iostream>
using namespace std;

class Person1 {
	//�޳�Ա
};

void Test1() {
	Person1 p1;
	cout << "size of Person1 is " << sizeof(p1) << endl;  //�޳�Ա�������ڴ���ռ��1���ֽ�,��c++������Ϊ�����ֿն���Ľ��
}

class Person2 {
	//ʵ����Ա����(ʵ���ֶ�)
	int _a;
	//��Ա����(ʵ������)����̬��Ա����(����)����̬��Ա����(����)ȫ���ֿ��洢����ֻ��һ��  ������C#��javaһ��
	void Func() {

	}
	static int _b; //������ʵ���ڴ�
	static void StaticFunc() {
		
	}
};
int Person2::_b = 10;

void Test2() {
	Person2 p2;
	cout << "size of Person2 is " << sizeof(p2) << endl;  //ʵ���ֶ��ж��Ͷ��
}

int main() {
	Test1();
	Test2();
}
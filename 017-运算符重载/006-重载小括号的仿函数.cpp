#include <iostream>
using namespace std;
#include <string>
class Print {
public:
	//�������С���ţ�ʹ��ʵ�����������()���ú����Ĺ���
	void operator()(string msg) {
		cout << msg << endl;
	}

	//ע:������������Ǿ�̬�ĳ�Ա����
	//static void operator()(string msg) {

	//}
};

class MyAdd {
public:
	int operator()(int num1, int num2) {
		return num1 + num2;
	}
};

int main() {
	Print print;
	//������ʹ�������˺���������Ҳ��Ϊ�º���,Ҳ�Ƚ���C#�е�ί��
	print("Hello World"); //����Python ������

	//����ֱ��ʹ����������
	int num1 = 5,num2=6;
	cout << num1 << "+" << num2 << "=" << MyAdd()(num1, num2) << endl;
}
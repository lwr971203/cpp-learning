#include <iostream>
using namespace std;
#include <string>

//ȫ�ֱ���(ȫ�ֵĶ���ȫ����)
int g_a = 10;
int g_b = 10;
//ȫ�ֳ���
const int c_g_a = 30;
const int c_g_b = 30;
int main() {
	//����ȫ������:ȫ�ֱ�����ȫ�ֳ�������̬������static��������
	cout << "ȫ�ֱ���g_a�ĵ�ַ:" << (int)&g_a << endl;
	cout << "ȫ�ֱ���g_b�ĵ�ַ:" << (int)&g_b << endl;
	static	int s_a = 20; //static��ʾֻ���ʼ��һ��
	static	int s_b = 20;
	cout << "��̬����s_a�ĵ�ַ:" << (int)&s_a << endl;
	cout << "��̬����s_b�ĵ�ַ:" << (int)&s_b << endl;
	cout << "ȫ�ֳ���c_g_a�ĵ�ַ:" << (int)&c_g_a << endl;
	cout << "ȫ�ֳ���c_g_b�ĵ�ַ:" << (int)&c_g_b << endl;
	string testStr = "lwr"; //����  string testStr = string("lwr");
	cout << "string���͵ĵ��ַ�����ַ" << (int)&testStr << endl; //string���͵��ַ������Ժͺ���ľֲ������ֲ�����ͬ����һ������
	cout << "�ַ����������ĵ�ַ:" << (int)&"lwr" << endl;

	//����ȫ�����ģ��ֲ��������ֲ�����(��const����)
	int a = 40;
	int b = 40;
	const int c_l_a = 50;
	const int c_l_b = 50;
	cout << "�ֲ�����a�ĵ�ַ:" << (int)&a << endl;
	cout << "�ֲ�����b�ĵ�ַ:" << (int)&b << endl;
	cout << "�ֲ�����a�ĵ�ַ:" << (int)&c_l_a << endl;
	cout << "�ֲ�����b�ĵ�ַ:" << (int)&c_l_b << endl;
}
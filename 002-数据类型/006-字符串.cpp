#include <iostream>
using namespace std;
#include <string>

int main() {
	//C�����ַ���
	char str1[] = "Hello World";
	cout << str1 << endl;
	//char[] str2 = "Hello World"; //��֧��

	//C++�����ַ���,��C#��һ����ֻ����Ҫ����һ��stringͷ�ļ�
	string str3 = "Hello World";
	cout << str3 << endl;

	//����C�����ַ���(����������ָ��)�Ƿ�����ַ����Ĳ��ɱ���
	cout << "str1�ĵ�ַ" << (int)&str1 << endl;
	//str1 = "Hello World1"; //�������,����ָ���������ָ�볣��   ����˵��c�����ַ���ʵ��(�ַ�����ʵ��)�в��ɱ��Ե�,ÿ�ζ�Ϊ�ַ���ʵ���¿��ٿռ�
	//����C++����string�����ַ����Ƿ�����ַ����Ĳ��ɱ���
	cout << "str3 �ĵ�ַ,sizeof is " << (int)&str3 << "," << sizeof str3 << endl;
	str3 = "�õĹ�������������������������������������������������������������������2��9u";
	cout << "str3 �ı��ĵ�ַ,sizeof is " << (int)&str3 << "," << sizeof str3 << endl;
	cout << str3 << endl;
	//���εĵ�ַ��һ����,��sizeofһ��,��֪���ڲ���ôʵ�ֵ�,�ǳ�����.Ҳ����˵C++��string����ʵ�����Կ���"��̬�ɱ��",���ڴ��С����.  
	//������������������������Ե�Ԥ��������string��Ϊ��ȫ��ͬ

	string str = "";
	cout << sizeof str << endl; //string����ʵ���ڴ��С�̶�Ϊ28�ֽ�(���ڶ���ʵ����string���ڴ��С���ǹ����,����28����Ҳ���ǹ̶���)
}
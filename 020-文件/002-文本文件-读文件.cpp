#include <iostream>
using namespace std;
#include <string>
#include <fstream>

void ReadText(string* filePath) {
	//�����ļ���
	ifstream ifs;
	//���ô򿪷�ʽ
	ifs.open(*filePath, ios::in);
	if (!ifs.is_open())
	{
		cout << "��" << *filePath << "ʧ��" << endl;
		return;
	}
	//���ֶ�ȡ��ʽ
	//1����һ��
	//char buff[1024] = {0};
	//while (ifs>>buff) //��ȡ�ı��������հ��ַ������հ��ַ��󷵻ء���������ȡ������ɹ����򷵻�true�����򷵻�false
	//{
	//	cout << buff << endl;
	//}

	//�ڶ��ַ�ʽ�����ֽڶ�ȡ
	/*char buff[1024] = { 0 };
	while (ifs.getline(buff,sizeof(buff)))
	{
		cout << buff << endl;
	}*/

	//�����֣���ȡ���ַ�����
	//string text="";
	//while (getline(ifs,text)) //Ҳ��һ��һ�еĶ�ȡ,���getline������Ҫ����stringͷ�ļ�
	//{
	//	cout << text<<endl;
	//}

	//�����֣�һ���ַ�һ���ַ��Ķ�
	char a = 'a';
	while ((a = ifs.get()) != EOF) //EOF��ʾ��ֹ����END OF FILE�� 
	{
		cout << a;
	}

	//�ر��ļ���
	ifs.close();

}

int main() {
	string filePath = "Test.txt";
	ReadText(&filePath);
}
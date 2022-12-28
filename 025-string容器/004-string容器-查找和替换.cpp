#include <iostream>
using namespace std;
#include <string>

/*
- int find(const string& str, int pos = 0) const;`              //����str��һ�γ���λ��,��pos��ʼ����
- `int find(const char* s, int pos = 0) const; `                     //����s��һ�γ���λ��,��pos��ʼ����
- `int find(const char* s, int pos, int n) const; `               //��posλ�ò���s��ǰn���ַ���һ��λ��
- `int find(const char c, int pos = 0) const; `                       //�����ַ�c��һ�γ���λ��
- `int rfind(const string& str, int pos = npos) const;`      //����str���һ��λ��,��pos��ʼ����
- `int rfind(const char* s, int pos = npos) const;`              //����s���һ�γ���λ��,��pos��ʼ����
- `int rfind(const char* s, int pos, int n) const;`              //��pos����s��ǰn���ַ����һ��λ��
- `int rfind(const char c, int pos = 0) const;  `                      //�����ַ�c���һ�γ���λ��
- `string& replace(int pos, int n, const string& str); `       //�滻��pos��ʼn���ַ�Ϊ�ַ���str
- `string& replace(int pos, int n,const char* s); `                 //�滻��pos��ʼ��n���ַ�Ϊ�ַ���s
*/
void Test1() {
	string str = "Hellor World";
	int index = str.find("or"); //���������ҵ�һ��
	cout << index << endl;

	index = str.rfind("or"); //���������ҵ�һ�������صĻ��Ǵ������Ҽ��������
	cout << index << endl;
}

void Test2() {
	string str = "Hello World";
	str.replace(6,5,"���ϰ�"); //�ӵڼ��������滻�����ַ�
	cout << str << endl;
}

int main() {
	Test1();

	Test2();
}
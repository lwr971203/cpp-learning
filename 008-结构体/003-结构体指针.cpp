#include <iostream>
#include <string>
using namespace std;

struct Student {
	string name;
	int age;
	int score;
} s3;

int main() {
	s3 = { "Lisa",24,98 }; //����������...
	Student* p = &s3;
	//ָ�����ʵ����Ա��ʵ��������ʳ�Աʱ��ͬ�ģ����õ���->
	cout << "����:" << p->name << "����:" << p->age << "�ɼ�:" << p->score << endl;
}
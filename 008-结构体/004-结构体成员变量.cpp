#include <iostream>
#include <string>
using namespace std;

struct Student {
	string name;
	int age;
	int score;
};

struct Teacher {
	int id;
	string name;
	int age;
	Student student;
};

int main() {
	Teacher teacher =
	{
		35,"Liuguohao",40,
	{"lwr",23,100}
	}; //�ṹ�帳ֵ�� json ����˵�ǳ�������

	cout << "��ʦ����:" << teacher.id << " ��ʦ����:" << teacher.name << " ��ʦ����:" << teacher.age
		<< "\n��ʦ������ѧ������:" << teacher.student.name << " ѧ������:" << teacher.student.age << " ѧ���ɼ�:" << teacher.student.score << endl;
}
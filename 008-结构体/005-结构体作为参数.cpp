#include <iostream>
#include <string>
using namespace std;

struct Student
{
	string name;
	int age;
	int score;
};

void ChangeAge1(Student student) { //��ֵ����,�����βζ�ʵ�εĿ���
	student.age = 100;
	cout << "ChangeAge1����������:" << student.name << " ����:" << student.age << " �ɼ�:" << student.score << endl;
}

void ChangeAge2(Student* student) {//��ַ����,�β�ָ��ָ��ʵ��ʵ��
	student->age = 100;
	cout << "ChangeAge2����������:" << student->name << " ����:" << student->age << " �ɼ�:" << student->score << endl;
}

int main() {
	Student student;
	student.name = "����";
	student.age = 12;
	student.score = 65;

	cout << "main����������:" << student.name << " ����:" << student.age << " �ɼ�:" << student.score << endl;
	ChangeAge1(student);
	cout << "main����������:" << student.name << " ����:" << student.age << " �ɼ�:" << student.score << endl;
	ChangeAge2(&student);
	cout << "main����������:" << student.name << " ����:" << student.age << " �ɼ�:" << student.score << endl;
}
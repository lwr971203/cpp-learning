#include <iostream>
#include <string>
using namespace std;

struct Student
{
	string name;
	int age;
	int score;
};

void PrintStudent(const Student* student) {
	//student->age = 500; //����ָ��ĳ�Ա����Ҳ�޷�д��!
	cout << "����:" << student->name << " ����:" << student->age << " �ɼ�:" << student->score << endl;
}

int main() {
	Student student = { "lwr",23,95 };
	PrintStudent(&student);
}
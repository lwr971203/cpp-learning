#include <iostream>
using namespace std;
#include <string>

class Student {
private:
	string name;
	int id;
public:
	void SetName(string name) {
		this->name = name; //this指针指向当前实例
	}
	void SetId(int id) {
		this->id = id;
	}
	void Show() {
		cout << "我的名字:" << name << ",我的学号:" << id << endl;
	}
};

int main() {
	Student stu1;
	stu1.SetId(1);
	stu1.SetName("lwr");
	stu1.Show();

	Student stu2;
	stu1.SetId(2);
	stu1.SetName("lgh");
	stu1.Show();
}
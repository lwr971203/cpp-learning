#include <iostream>
using namespace std;

class BasePage {
public:
	void ShowHeader() {
		cout << "��ҳ�������Ρ���¼��ע��...(����ͷ��)" << endl;
	}

	void ShowLeft() {
		cout << "Java��Python��C++ ... �����������б�" << endl;
	}

	void ShowFooter(){
		cout << "�������ġ�����������վ�ڵ�ͼ ... �������ײ���" << endl;
	}
};

class JavaPage :public BasePage {
public:
	void ShowContent() {
		cout << "Javaѧ����Ƶ" << endl;
	}
};

class PythonPage :public BasePage {
public:
	void ShowContent() {
		cout << "Pythonѧ����Ƶ" << endl;
	}
};

class CppPage :public BasePage {
public:
	void ShowContent() {
		cout << "C++ѧ����Ƶ" << endl;
	}
};

int main() {
	PythonPage python;
	python.ShowHeader();
	python.ShowLeft();
	python.ShowContent();
	python.ShowFooter();
	cout << "==========" << endl;

	JavaPage java;
	java.ShowHeader();
	java.ShowLeft();
	java.ShowContent();
	java.ShowFooter();
	cout << "==========" << endl;

	CppPage cpp;
	cpp.ShowHeader();
	cpp.ShowLeft();
	cpp.ShowContent();
	cpp.ShowFooter();
}
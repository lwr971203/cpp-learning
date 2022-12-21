#include <iostream>
using namespace std;

class BasePage {
public:
	void ShowHeader() {
		cout << "首页、公开课、登录、注册...(公共头部)" << endl;
	}

	void ShowLeft() {
		cout << "Java、Python、C++ ... （公共分类列表）" << endl;
	}

	void ShowFooter(){
		cout << "帮助中心、交流合作、站内地图 ... （公共底部）" << endl;
	}
};

class JavaPage :public BasePage {
public:
	void ShowContent() {
		cout << "Java学科视频" << endl;
	}
};

class PythonPage :public BasePage {
public:
	void ShowContent() {
		cout << "Python学科视频" << endl;
	}
};

class CppPage :public BasePage {
public:
	void ShowContent() {
		cout << "C++学科视频" << endl;
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
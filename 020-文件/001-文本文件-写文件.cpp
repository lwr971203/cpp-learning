#include <iostream>
using namespace std;
#include <string>
#include <fstream>

void WriteText(string* filePath) {
	//创建文件流
	ofstream ofs;

	//指定打开方式
	ofs.open(*filePath, ios::out);

	//写内容
	ofs << "This is a Test" << endl;
	ofs << "This is a Test" << endl;
	ofs << "This is a Test" << endl;

	//关闭文件流
	ofs.close();
}

int main() {
	string filePath = "Test.txt"; //这个string类型的变量实例是开辟在栈区的,会被自动释放
	WriteText(&filePath);
}
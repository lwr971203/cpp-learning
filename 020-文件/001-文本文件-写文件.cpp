#include <iostream>
using namespace std;
#include <string>
#include <fstream>

void WriteText(string* filePath) {
	//�����ļ���
	ofstream ofs;

	//ָ���򿪷�ʽ
	ofs.open(*filePath, ios::out);

	//д����
	ofs << "This is a Test" << endl;
	ofs << "This is a Test" << endl;
	ofs << "This is a Test" << endl;

	//�ر��ļ���
	ofs.close();
}

int main() {
	string filePath = "Test.txt"; //���string���͵ı���ʵ���ǿ�����ջ����,�ᱻ�Զ��ͷ�
	WriteText(&filePath);
}
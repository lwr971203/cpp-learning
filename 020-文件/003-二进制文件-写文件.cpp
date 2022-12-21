#include <iostream>
#include <fstream>
using namespace std;

class Person {
public:
	char _name[64]; //不要用C++的string类型,可能会有bug
	int _age;
};

void BinaryWrite(string* filePath) {
	//创建对象同时用构造函数设置好打开方式
	ofstream ofs(*filePath, ios::out | ios::binary);

	//写入数据
	Person p = { "张三",20 };
	//告诉实例的地址,还有多大
	ofs.write((const char*)&p, sizeof(p)); //这里可以看出c++没有byte类型,所以用大小一样的char来代替了

	//关闭文件流
	ofs.close();

	cout << "写入完成!" << endl;
}

int main() {
	string fileName = "person.txt";
	BinaryWrite(&fileName);
}
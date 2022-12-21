#include <iostream>
using namespace std;
#include <string>
#include <fstream>

void ReadText(string* filePath) {
	//创建文件流
	ifstream ifs;
	//设置打开方式
	ifs.open(*filePath, ios::in);
	if (!ifs.is_open())
	{
		cout << "打开" << *filePath << "失败" << endl;
		return;
	}
	//四种读取方式
	//1、第一种
	//char buff[1024] = {0};
	//while (ifs>>buff) //读取文本，遇到空白字符跳过空白字符后返回。如果输入读取且输入成功，则返回true，否则返回false
	//{
	//	cout << buff << endl;
	//}

	//第二种方式：按字节读取
	/*char buff[1024] = { 0 };
	while (ifs.getline(buff,sizeof(buff)))
	{
		cout << buff << endl;
	}*/

	//第三种：读取到字符串中
	//string text="";
	//while (getline(ifs,text)) //也是一行一行的读取,这个getline函数需要包含string头文件
	//{
	//	cout << text<<endl;
	//}

	//第四种：一个字符一个字符的读
	char a = 'a';
	while ((a = ifs.get()) != EOF) //EOF表示终止符（END OF FILE） 
	{
		cout << a;
	}

	//关闭文件流
	ifs.close();

}

int main() {
	string filePath = "Test.txt";
	ReadText(&filePath);
}
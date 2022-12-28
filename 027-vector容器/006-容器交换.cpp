#include <iostream>
#include <vector>
using namespace std;

void printVector(vector<int>& v) {
	for (vector<int>::iterator i = v.begin(); i != v.end(); i++)
	{
		cout << *i << " " ;
	}
	cout << endl;
}

void Test1() {
	vector<int> v1;
	for (int i = 0; i < 10; i++)
	{
		v1.push_back(i);
	}
	printVector(v1);
	cout << "v1 的地址为: " << (int)&v1 << endl;

	vector<int> v2;
	for (int i = 10; i > 0; i--)
	{
		v2.push_back(i);
	}
	printVector(v2);
	cout << "v2 的地址为: " << (int)&v2 << endl;

	v1.swap(v2);
	printVector(v1);
	printVector(v2);
	cout << "v1 的地址为: " << (int)&v1 << endl; //地址并没有发生改变
	cout << "v2 的地址为: " << (int)&v2 << endl; //地址并没有发生改变
}

//用swap可以收缩内存
void Test2() {
	vector<int> v1;
	for (int i = 0; i < 100000; i++)
	{
		v1.push_back(i);
	}
	cout << "v1 的容量为: " << v1.capacity() << endl;
	cout << "v1 的size为: " << v1.size() << endl;

	//重新指定size并不会改变容量,造成浪费
	v1.resize(5);
	cout << "v1 的容量为: " << v1.capacity() << endl;
	cout << "v1 的size为: " << v1.size() << endl;

	//利用匿名对象结合swap来达到收缩内存的效果
	vector<int>(v1).swap(v1); //这里匿名对象会根据v1的size进行拷贝构造,然后再执行swap
	cout << "v1 的容量为: " << v1.capacity() << endl;
	cout << "v1 的size为: " << v1.size() << endl;
}

int main() {
	Test1();
	Test2();
}
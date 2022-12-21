#include <iostream>
using namespace std;
//C++中struct的成员访问权限默认是public
//C++中class的成员访问权限默认是private 与C#一致
struct C1
{
	int m_A;
};

class C2 {
	int m_A;
};

int main() {
	C1 c1;
	c1.m_A = 10;

	C2 c2;
	//c2.m_A = 10; //报错
}
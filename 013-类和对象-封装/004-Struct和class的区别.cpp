#include <iostream>
using namespace std;
//C++��struct�ĳ�Ա����Ȩ��Ĭ����public
//C++��class�ĳ�Ա����Ȩ��Ĭ����private ��C#һ��
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
	//c2.m_A = 10; //����
}
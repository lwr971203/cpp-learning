#include <iostream>
using namespace std;

class Base {
public:
	int _a;
protected:
	int _b;
private:
	int _c;
};

class Son:public Base {
public:
	int _d;
};


int main() {
	//�̳л�Ѹ�������г�Ա���̳�����������˽�еġ�ֻ���������޷�����˽�е�
	cout << "size of Son" << sizeof(Son) << endl; //16���ֽ�
}
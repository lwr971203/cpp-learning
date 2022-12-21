#include <iostream>
using namespace std;

class Base {
protected:
	int _a;
public:
	//�Ǵ��麯��(������)�ǿ���������ʵ�ֵ�
	Base() {
		//ע:������Ĺ��캯����Զֻ����������� !  һ���������ó����๹�캯��(���߿�������)�Ĵ��붼�Ǳ������
		_a = 10;
	}
	virtual int GetA() = 0; //ֻ��Ҫ����Ӹ�����0���С�����Ǹ�������ġ��޷�����ʵ�����������ʸ�C#�еĳ�����һ��,���﷨��ͬ
};

class Son :public Base {
private:
	//ʵ�������ʵ�ֳ�����Ĵ��麯��,�����Լ�Ҳ��Ϊ�������޷�ʵ����
	int GetA() {
		return _a;
	}
};

int main() {
	Base& base = *new Son();
	cout << "base�е�aΪ" << base.GetA() << endl;

	Base* base_p = new Son();
	cout << "base�е�aΪ" << base_p->GetA() << endl;

	delete base_p;
}
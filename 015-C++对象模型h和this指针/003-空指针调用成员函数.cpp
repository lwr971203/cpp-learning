#include <iostream>
using namespace std;

class Person {
public:
	int _age;
	void ShowMsg() {
		cout << "Hello World" << endl;
	}
	void ShowAge() {
		//cout << "_age=" << _age << endl; //����ɹ�,������ʧ��.  ����ָ�����ʵ����Ա������ʱ��ᱬ��ָ���쳣,���û�з��ʵ���û��
		//����ʵ����Ա����ʱC++��������Ĭ�ϸ���������������_age����this->_age
		//���������ԭ�����Ǵ����ڴ��е���һ�ݵĳ�Ա������ʱ�򣬻Ὣ����ָ�봫��this
		//��Ҳ��Ϊʲô��Ա����������ÿ�������һ��ԭ��

		//C++��ָ�뾹Ȼ���Է��ʳ�Ա����(̫������),����Ҫ����ָ��У��
		if (this == NULL) {
			cout << "�޷�ʹ�ÿ�ָ�����!" << endl;
			return;
		}

		cout << "_age" << _age << EDOM;
	}
};

int main() {
	Person* p1 = NULL;
	p1->ShowMsg();
	p1->ShowAge();
}
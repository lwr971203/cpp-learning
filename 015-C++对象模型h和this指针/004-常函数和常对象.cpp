#include <iostream>
using namespace std;

class Person {
public:
	int _a;
	mutable int _b;
	//thisָ���ʵ����һ��ָ�볣����ָ��ǰ���� Person * const this	Ĭ�ϻ�Ϊÿ����Ա������������ָ�볣��
	//�ں����������const���η�����ʾconst Person * const this����this���޷��޸�ָ�����޷��޸ĳ�Ա����
	void ShowPerson() const{
		//_a = 10; �������޷��޸���ͨ�ֶ�
		//���ǣ���������ļ���mutable(�ױ��)�ؼ��ֵĳ�Ա�������ǿ����޸ĵ�
		_b = 10;
		cout << _b << endl;
	}

	void OrdinaryFunc() {

	}
};

int main() {
 	const Person p1; //����const���η���ʾ���Ǹ�������
	//�������޷��޸���ͨ�ֶΣ������޸�mutable�ֶ�
	//p1._a = 10; 
	p1._b = 20;

	//������ֻ�ܵ��ó�����
	//p1.OrdinaryFunc(); //��Ϊ��ͨ�����п����޸���ͨ��Ա����������ֱ�����ض�ɱ�������
	p1.ShowPerson();
}
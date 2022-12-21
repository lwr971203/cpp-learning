#include <iostream>
using namespace std;

class MyInteger {
	friend ostream& operator<<(ostream &out, MyInteger &myInterger);
private:
	int _value;
	int _stepLength;
public:

	MyInteger(int value, int stepLength) :_value(value), _stepLength(stepLength) {

	}

	//���ó�Ա�������ص��������
	MyInteger& operator++() {
		this->_value += _stepLength;
		return *this;
	}

	//������int��ռλ������ʾ���õ���
	MyInteger operator++(int) {
		MyInteger temp = *this; //��¼����֮ǰ��״̬
		this->_value += _stepLength; //͵͵����
		return temp; //��֮ǰ��״̬����
	}
};

ostream& operator<<(ostream &out, MyInteger &myInterger) {
	cout << myInterger._value << endl;
	return out;
}

int main() {
	MyInteger myInteger(10, 2);
	cout << ++myInteger;
	cout << myInteger;

	//cout << myInteger++; //����
	//ע�����ں��õ���cout << myInteger++�����ԭ��
	//myInterger++�ڳ�����ʱ����һ���µĸ���������,��MyInterger&,����������ܿ��Ҫ������
	//operator<<�ĵڶ������ò����޷�����һ�����������ٵĸ���
	//��operator�е�ʵ���ĳɶ���ʵ����û��,��������Ҫ�ֶ����ٶ����ڴ�


	MyInteger m1 = myInteger++;
	cout << m1;
	cout << myInteger;

	
}
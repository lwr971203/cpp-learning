#include <iostream>
using namespace std;
#include <string>
//��Ա��������Ԫ�����кܶ�ӣ�ע�⡣C++��ͳһ�����ҹ�����ɵ�

class Man; //����������ô���࣬���濪ʼ���벻��ȫ����ʱ�ڣ�δ�����壩
class GoodGay {
private:
	//��Man�Ĳ���ȫ����ʱ�ڣ�ֻ������ʹ�������ı�ʶ�Ա�������ָ�������
	//��Ϊ��֪������������ζ��壬Ҫ������ڴ棬���Բ��ܴ���ʵ����
	//���������ָ������ã�ֻ��̶���4��8���ֽڣ����������Ϊ�Ǿ��������
	Man* _myFriend;
public:
	string _name;
	GoodGay();
	~GoodGay();
	//Ҫ�������Ա��������Ϊ��һ�������Ԫ��ֻ�������Ҳ��ܶ�������һ�����ʵ���Ľ���
	void AccessFriend();
};

class Man {
	//�������ѳ�Ա����
	friend void GoodGay::AccessFriend(); //������Ԫ��Ա����ǰ��ӵ�г�Ա�������Ǹ�������ȱ����壨�������������Ա������
	//���罫Man�Ķ������GoodGayǰ����������޷�ȷ��friend void GoodGay::AccessFriend();��GoodGay���໹�������ռ�
	//�����ò��ɹ���AccessFriend��Ȼ���޷���Ϊ��Ԫ��Ա����
private:
	string _myBedRoom;
public:
	string _name;
	string _mySittingRoom;
	Man();
};
Man::Man() {
	_name = "�ŷ�";
	_myBedRoom = "����";
	_mySittingRoom = "����";
}

//��Man�౻����֮�󣬾�������Man��Ĳ���ȫʱ�ڣ������Կ�ʼʹ��Man���ʵ����
GoodGay::GoodGay() {
	_myFriend = new Man();
	_name = "����";
}
GoodGay::~GoodGay() {
	if (_myFriend != NULL)
	{
		delete _myFriend;
		_myFriend = NULL;
	}
}
void GoodGay::AccessFriend() {
	cout << _name << "���ڷ���" << _myFriend->_name << "��" << _myFriend->_mySittingRoom << endl;
	cout << _name << "���ڷ���" << _myFriend->_name << "��" << _myFriend->_myBedRoom << endl;
}

int main() {
	GoodGay goodGay;
	goodGay.AccessFriend();
}
#include "manager.h"

void Manager::ShowInfo() {
	cout << "Ա�����:" << Worker::_id << "\t"
		<< "Ա������:" << Worker::_name << "\t"
		<< "���ű��:" << Worker::_deptId << "\t"
		<< "��λ:" << this->GetStation() << "\t"
		<< "��λְ��:" << "����ϰ��·���������" << endl;
}
string Manager::GetStation() {
	return "��Ŀ����";
}
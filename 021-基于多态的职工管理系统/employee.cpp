#include "employee.h"

void Employee::ShowInfo() {
	cout << "Ա�����:" << Worker::_id << "\t"
		<< "Ա������:" << Worker::_name << "\t"
		<< "���ű��:" << Worker::_deptId << "\t"
		<< "��λ:" << this->GetStation() << "\t"
		<< "��λְ��:" << "��ɾ����·���������" << endl;
}
string Employee::GetStation() {
	return "��ͨԱ��";
}
#include "boss.h"

void Boss::ShowInfo() {
	cout << "Ա�����:" << Worker::_id << "\t"
		<< "Ա������:" << Worker::_name << "\t"
		<< "���ű��:" << Worker::_deptId << "\t"
		<< "��λ:" << this->GetStation() << "\t"
		<< "��λְ��:" << "���Ǵ��ϰ壬ɶ�¶����ø�" << endl;
}
string Boss::GetStation() {
	return "���ϰ�";
}
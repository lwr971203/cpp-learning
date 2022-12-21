#include "boss.h"

void Boss::ShowInfo() {
	cout << "员工编号:" << Worker::_id << "\t"
		<< "员工姓名:" << Worker::_name << "\t"
		<< "部门编号:" << Worker::_deptId << "\t"
		<< "岗位:" << this->GetStation() << "\t"
		<< "岗位职责:" << "我是大老板，啥事都不用干" << endl;
}
string Boss::GetStation() {
	return "大老板";
}
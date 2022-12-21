#include "manager.h"

void Manager::ShowInfo() {
	cout << "员工编号:" << Worker::_id << "\t"
		<< "员工姓名:" << Worker::_name << "\t"
		<< "部门编号:" << Worker::_deptId << "\t"
		<< "岗位:" << this->GetStation() << "\t"
		<< "岗位职责:" << "完成老板下发给的任务" << endl;
}
string Manager::GetStation() {
	return "项目经理";
}
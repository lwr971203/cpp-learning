#include "employee.h"

void Employee::ShowInfo() {
	cout << "员工编号:" << Worker::_id << "\t"
		<< "员工姓名:" << Worker::_name << "\t"
		<< "部门编号:" << Worker::_deptId << "\t"
		<< "岗位:" << this->GetStation() << "\t"
		<< "岗位职责:" << "完成经理下发给的任务" << endl;
}
string Employee::GetStation() {
	return "普通员工";
}
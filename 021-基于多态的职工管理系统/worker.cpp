#include "worker.h"

int Worker::GetId() {
	return this->_id;
}
string Worker::GetName() {
	return this->_name;
}
int Worker::GetDeptId() {
	return this->_deptId;
}
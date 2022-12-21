#pragma once
#include <iostream>
using namespace std;
#include <string>

class Worker {
	//friend class WorkerManager;
protected:
	int _id;
	string _name;
	int _deptId;
	Worker(int id, string name, int deptId) :_id(id), _name(name), _deptId(deptId) {}
public:
	int GetId();
	string GetName();
	int GetDeptId();

	virtual void ShowInfo() = 0;
	virtual string GetStation() = 0;
};
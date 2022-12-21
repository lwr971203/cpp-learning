#pragma once
#include <iostream>
#include <string>
#include "worker.h"
using namespace std;


class Manager :public Worker {
public:
	Manager(int id, string name, int deptId) :Worker(id, name, deptId) {}
	void ShowInfo();
	string GetStation();
};
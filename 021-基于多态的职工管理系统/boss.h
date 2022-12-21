#pragma once
#include <iostream>
#include <string>
#include "worker.h"
using namespace std;

class Boss :public Worker {
public:
	Boss(int id,string name,int deptId):Worker(id,name,deptId){}
	void ShowInfo();
	string GetStation();
};

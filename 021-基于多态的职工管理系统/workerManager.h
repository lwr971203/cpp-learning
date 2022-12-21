#pragma once //防止头文件重复包含
#include <iostream>
using namespace std;

#include "employee.h"
#include "manager.h"
#include "boss.h"

class WorkerManager {
private:
	int _workerCount;
	bool _isFileEmpty;
	Worker** _workerArr; //目的用来指向指针数组的指针
	void Save();
	void GetWorkers();
	int Exist(int id);
public:
	WorkerManager();
	~WorkerManager();
	void ShowMenu();
	void Add();
	void ShowWorkers();
	void DeleteWorker();
	void ModifyWorker();
	void SearchWorker();
	void SortWorkers();
	void ClearFile();
	void Exit();
};


#pragma once //��ֹͷ�ļ��ظ�����
#include <iostream>
using namespace std;

#include "employee.h"
#include "manager.h"
#include "boss.h"

class WorkerManager {
private:
	int _workerCount;
	bool _isFileEmpty;
	Worker** _workerArr; //Ŀ������ָ��ָ�������ָ��
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


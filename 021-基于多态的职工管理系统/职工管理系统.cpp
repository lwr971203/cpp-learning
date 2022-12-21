#include <iostream>
using namespace std;
#include "workerManager.h"

int main() {
	WorkerManager wm;
	int choice = 0;
	while (true)
	{
		wm.ShowMenu();
		cout << "请输入你的选择！" << endl;
		cin >> choice;
		system("cls");
		switch (choice)
		{
		case 1: //增加职工
			wm.Add();
			break;
		case 2: //显示职工
			wm.ShowWorkers();
			break;
		case 3: //删除职工
			wm.DeleteWorker();
			break;
		case 4: //修改职工
			wm.ModifyWorker();
			break;
		case 5: //查找职工
			wm.SearchWorker();
			break;
		case 6: //排序职工
			wm.SortWorkers();
			break;
		case 7: //清空文档
			wm.ClearFile();
			break;
		case 0:
			wm.Exit();
		default:
			cout << "输入有误，请重新输入..." << endl;
			break;
		}
		system("pause");	
		system("cls");
	}
}
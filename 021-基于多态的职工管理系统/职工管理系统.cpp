#include <iostream>
using namespace std;
#include "workerManager.h"

int main() {
	WorkerManager wm;
	int choice = 0;
	while (true)
	{
		wm.ShowMenu();
		cout << "���������ѡ��" << endl;
		cin >> choice;
		system("cls");
		switch (choice)
		{
		case 1: //����ְ��
			wm.Add();
			break;
		case 2: //��ʾְ��
			wm.ShowWorkers();
			break;
		case 3: //ɾ��ְ��
			wm.DeleteWorker();
			break;
		case 4: //�޸�ְ��
			wm.ModifyWorker();
			break;
		case 5: //����ְ��
			wm.SearchWorker();
			break;
		case 6: //����ְ��
			wm.SortWorkers();
			break;
		case 7: //����ĵ�
			wm.ClearFile();
			break;
		case 0:
			wm.Exit();
		default:
			cout << "������������������..." << endl;
			break;
		}
		system("pause");	
		system("cls");
	}
}
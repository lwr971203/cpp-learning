#include "workerManager.h"
#include <fstream>
#define FILENAME "Ա����.txt"


//���캯��
WorkerManager::WorkerManager() {
	ifstream ifs;
	ifs.open(FILENAME, ios::in);

	//��ʧ�ܣ��ļ�������
	if (!ifs.is_open())
	{
		//cout << "�ļ�������" << endl;
		this->_isFileEmpty = true;
		this->_workerArr = NULL;
		this->_workerCount = 0;
		ifs.close();
		return;
	}

	//�ļ����ڣ���������Ϊ��
	char ch;
	ifs >> ch;
	if (ifs.eof())
	{
		//cout << "�ļ�������" << endl;
		this->_isFileEmpty = true;
		this->_workerArr = NULL;
		this->_workerCount = 0;
		ifs.close();
		return;
	}

	ifs.close();

	//�ļ������Ҳ�Ϊ��
	GetWorkers();

}

//��ȡ����worker
void WorkerManager::GetWorkers() {
	ifstream ifs;
	ifs.open(FILENAME, ios::in);

	if (ifs.is_open())
	{
		int count = 0;
		//ifs.clear();
		//ifs.seekg(ios::beg); //�������������ָ����λ�á���Ϊǰ����Ե�ʱ���ȡ��һ���ַ���������Ҫ������ʼλ��

		int id;
		string name;
		int deptId;
		string station;

		while (ifs >> id && ifs >> name && ifs >> deptId && ifs >> station)
		{
			count++;
		}

		this->_workerCount = count;
		this->_workerArr = new Worker*[count];
		this->_isFileEmpty = count > 0 ? false : true;
		ifs.close();

		ifs.open(FILENAME, ios::in);

		//ifs.seekg(ios::beg);
		int index = 0;
		while (ifs >> id && ifs >> name && ifs >> deptId && ifs >> station) //�����ҷ��Ŷ�������˳���޹ؽ�Ҫ
		{
			if (station == "���ϰ�")
			{
				this->_workerArr[index] = new Boss(id, name, deptId);
			}
			else if (station == "��Ŀ����")
			{
				this->_workerArr[index] = new Manager(id, name, deptId);
			}
			else
			{
				this->_workerArr[index] = new Employee(id, name, deptId);
			}
			index++;
		}
	}

	ifs.close();
}

//��������
WorkerManager::~WorkerManager() {
	if (this->_workerArr != NULL)
	{
		for (int i = 0; i < this->_workerCount; i++)
		{
			if (this->_workerArr[i]!=NULL)
			{
				delete this->_workerArr[i];
				this->_workerArr[i] = NULL;
			}
		}
		delete[] this->_workerArr;
		this->_workerArr = NULL;
	}
}

//չʾ�˵�
void WorkerManager::ShowMenu() {
	cout << "********************************************" << endl;
	cout << "**********  ��ӭʹ��ְ������ϵͳ  **********" << endl;
	cout << "********************************************" << endl;
	cout << "************  1.����ְ����Ϣ  **************" << endl;
	cout << "************  2.��ʾְ����Ϣ  **************" << endl;
	cout << "************  3.ɾ����ְְ��  **************" << endl;
	cout << "************  4.�޸�ְ����Ϣ  **************" << endl;
	cout << "************  5.����ְ����Ϣ  **************" << endl;
	cout << "************  6.���ձ������  **************" << endl;
	cout << "************  7.��������ĵ�  **************" << endl;
	cout << "************  0.�˳�����ϵͳ  **************" << endl;
}

//չʾ����worker��Ϣ
void WorkerManager::ShowWorkers() {
	if (this->_isFileEmpty)
	{
		cout << "�ļ������ڻ��¼Ϊ��" << endl;
	}
	else
	{
		for (int i = 0; i < this->_workerCount; i++)
		{
			this->_workerArr[i]->ShowInfo();
		}
	}
}

//�˳�����
void WorkerManager::Exit() {
	cout << "��ӭ�´�ʹ��" << endl;
	system("pause");
	exit(0);
}

//���Ա��
void WorkerManager::Add() {
	while (true)
	{
		cout << "��������Ҫ��ӵ�Ա������(�˳�=0)" << endl;
		int count = 0;
		cin >> count;

		if (count > 0)
		{
			//�����µĿռ�
			int newCount = this->_workerCount + count;
			Worker* *newArr = new Worker*[newCount];

			//���֮ǰ��ָ�벻Ϊ�գ������ǿ���һ��
			if (this->_workerArr != NULL)
			{
				for (int i = 0; i < this->_workerCount; i++)
				{
					newArr[i] = this->_workerArr[i];
				}
			}

			//����µ�����
			int id;
			string name;
			int deptId;
			int selected = 0;
			for (int i = 0; i < count; i++)
			{
				cout << "�������" << i + 1 << "����Ա���ı��" << endl;
				cin >> id;
				cout << "�������" << i + 1 << "����Ա��������" << endl;
				cin >> name;
				cout << "�������" << i + 1 << "����Ա���Ĳ��ű��" << endl;
				cin >> deptId;

				cout << "��ѡ�����Ա���ĸ�λ" << endl;
				cout << "1.��ͨԱ��" << endl;
				cout << "2.��Ŀ����" << endl;
				cout << "3.���ϰ�" << endl;
				cin >> selected;
				Worker *worker = NULL;
				switch (selected)
				{
				case 1:
					worker = new Employee(id, name, deptId);
					break;
				case 2:
					worker = new Manager(id, name, deptId);
					break;
				case 3:
					worker = new Boss(id, name, deptId);
					break;
				default:
					cout << "��������Ĭ��Ϊ��ͨԱ��" << endl;
					worker = new Employee(id, name, deptId);
					break;
				}

				newArr[this->_workerCount + i] = worker;
			}

			//�ͷ�ԭ����ָ��
			delete[] this->_workerArr; //���Ϊ��ָ����û����ģ���ΪC++�����ͷſ�ָ��

			//��ָ������ָ���¿��ٵ��ڴ�ռ�
			this->_workerArr = newArr;
			newArr = NULL;

			//����ͳ������
			this->_workerCount = newCount;

			//��¼�ļ�
			this->Save();

			//�ļ���Ϊ��
			this->_isFileEmpty = false;

			cout << "��ϲ���" << count << "��Ա���ɹ�" << endl;
			return;
		}
		else if (count == 0)
		{
			return;
		}
		else
		{
			cout << "������������������!" << endl;
		}
	}
}

//�����ļ�
void WorkerManager::Save() {
	ofstream ofs(FILENAME, ios::out);

	for (int i = 0; i < this->_workerCount; i++)
	{
		ofs << this->_workerArr[i]->GetId() << " "
			<< this->_workerArr[i]->GetName() << " "
			<< this->_workerArr[i]->GetDeptId() << " "
			<< this->_workerArr[i]->GetStation() << endl;
	}

	ofs.close();
}

//�Ƿ����Ա��
int WorkerManager::Exist(int id) {
	if (this->_isFileEmpty)
	{
		return -2; //�ļ������ڻ����޼�¼
	}

	int index = -1;

	for (int i = 0; i < this->_workerCount; i++)
	{
		if (this->_workerArr[i]->GetId() == id)
		{
			index = i;
			break;
		}
	}

	return index;
}

//ɾ��worker
void WorkerManager::DeleteWorker() {
	cout << "��������Ҫɾ����Ա�����" << endl;
	int selected = 0;
	cin >> selected;

	int index = this->Exist(selected);
	switch (index)
	{
	case -2:
		cout << "�ļ������ڻ��޼�¼" << endl;
		break;
	case -1:
		cout << "δ���ҵ�Ա�����Ϊ" << selected << "��Ա��" << endl;
		break;
	default:
	{
		for (int i = index; i < this->_workerCount - 1; i++)
		{
			this->_workerArr[i] = this->_workerArr[i + 1];
		}
		this->_workerArr[_workerCount - 1] = NULL;
		this->_workerCount--;

		//�������ļ�
		this->Save();
		cout << "ɾ��Ա�����Ϊ" << selected << "��Ա���ɹ�" << endl;
		break;
	}
	}
}

//�޸�worker
void WorkerManager::ModifyWorker() {
	cout << "��������Ҫ�޸ĵ�Ա�����" << endl;
	int selected = 0;
	cin >> selected;

	int index = this->Exist(selected);

	switch (index)
	{
	case -2:
		cout << "�ļ������ڻ��޼�¼" << endl;
		break;
	case -1:
		cout << "δ���ҵ�Ա�����Ϊ" << selected << "��Ա��" << endl;
		break;
	default:
	{
		//�ͷ�ԭ���Ķ���
		delete this->_workerArr[index];

		int id;
		string name;
		int deptId;
		cout << "������Ա���ı��" << endl;
		cin >> id;
		cout << "������Ա��������" << endl;
		cin >> name;
		cout << "������Ա���Ĳ��ű��" << endl;
		cin >> deptId;

		cout << "��ѡ�����Ա���ĸ�λ" << endl;
		cout << "1.��ͨԱ��" << endl;
		cout << "2.��Ŀ����" << endl;
		cout << "3.���ϰ�" << endl;
		int station = 0;
		cin >> station;
		Worker *worker = NULL;
		switch (station)
		{
		case 1:
			worker = new Employee(id, name, deptId);
			break;
		case 2:
			worker = new Manager(id, name, deptId);
			break;
		case 3:
			worker = new Boss(id, name, deptId);
			break;
		default:
			cout << "��������Ĭ��Ϊ��ͨԱ��" << endl;
			worker = new Employee(id, name, deptId);
			break;
		}

		this->_workerArr[index] = worker;
		this->Save();
		cout << "�޸�Ա�����Ϊ" << selected << "��Ա���ɹ�" << endl;
		break;
	}

	}
}

//����worker
void WorkerManager::SearchWorker() {	
	if (this->_isFileEmpty)
	{
		cout << "�ļ�Ϊ�ջ��޼�¼" << endl;
		return;
	}
	while (true)
	{
		cout << "��������Ҫ���ҵķ�ʽ:" << endl;
		cout << "1.��Ա����Ų���" << endl;
		cout << "2.��Ա����������" << endl;
		int mode;
		cin >> mode;
		if (mode == 1)
		{
			cout << "��������Ҫ���ҵ�Ա�����" << endl;
			int id;
			cin >> id;

			int index = this->Exist(id);
			if (index==-1)
			{
				cout << "���޴���" << endl;
			}
			else
			{
				cout << "Ա�����Ϊ" << id << "��Ա����ϢΪ����:" << endl;
				this->_workerArr[index]->ShowInfo();
			}

			break;
		}
		else if (mode == 2)
		{
			cout << "��������Ҫ���ҵ�Ա������" << endl;
			string name;
			cin >> name;
			bool flag = false;
			for (int i = 0; i < this->_workerCount; i++)
			{
				if (this->_workerArr[i]->GetName()==name)
				{
					flag = true;
					cout << "Ա������Ϊ" << name << "��Ա����ϢΪ����:" << endl;
					this->_workerArr[i]->ShowInfo();
					break; //ֻ��һ���ͺ���
				}
			}
			if (!flag)
				cout << "���޴���" << endl;	

			break;
		}
		else
		{
			cout << "���뷽ʽ����" << endl;
			cout << "�����������" << endl;
			system("pause");
			system("cls");
		}
	}
}

//����
void WorkerManager::SortWorkers() {
	if (this->_isFileEmpty)
	{
		cout << "�ļ������ڻ��޼�¼" << endl;
	}
	else
	{
		cout << "��ѡ������ʽ" << endl;
		cout << "1.��Ա���������" << endl;
		cout << "2.��Ա����Ž���" << endl;
		int selected;
		cin >> selected;

		for (int i = 0; i < this->_workerCount-1; i++)
		{
			//�ȼ����ǰ����Ϊ��ֵ���������ұ�ʣ�µ�ÿ�����бȽϣ���������ֵ������ֵ������ÿ����һ�ֲ���һ����ֵ����
			int minOrMax = i;
			for (int j = minOrMax+1; j < this->_workerCount; j++)
			{
				//����
				if (selected==1)
				{
					if (this->_workerArr[minOrMax]->GetId()>this->_workerArr[j]->GetId())
					{
						minOrMax = j;
					}
				}
				//����
				else if (selected==2)
				{
					if (this->_workerArr[minOrMax]->GetId() < this->_workerArr[j]->GetId())
					{
						minOrMax = j;
					}
				}
			}

			//����ֵ���������仯��������ǰ��������ֵ������Ӧ��ֵ
			if (minOrMax!=i)
			{
				Worker *temp = this->_workerArr[i];
				this->_workerArr[i] = this->_workerArr[minOrMax];
				this->_workerArr[minOrMax] = temp;
				temp = NULL;
			}
		}

		this->ShowWorkers();
	}
}

//���
void WorkerManager::ClearFile() {
	cout << "ȷ������������ݣ�" << endl;
	cout << "1.ȷ��	2.����" << endl;
	int selected;
	cin >> selected;

	if (selected==1)
	{
		ofstream ofs(FILENAME,ios::trunc); //���������ɾ��֮���ٴ���
		ofs.close();

		//ά������
		if (this->_workerArr!=NULL)
		{
			for (int i = 0; i < this->_workerCount; i++)
			{
				if (this->_workerArr[i]!=NULL)
				{
					delete this->_workerArr[i];
					this->_workerArr[i] = NULL;
				}
			}
			delete[] this->_workerArr;
			this->_workerArr = NULL;
		}
		this->_workerCount = 0;
		this->_isFileEmpty = true;

		cout << "��ճɹ�!" << endl;
	}
}
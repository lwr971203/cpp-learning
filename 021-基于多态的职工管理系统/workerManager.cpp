#include "workerManager.h"
#include <fstream>
#define FILENAME "员工表.txt"


//构造函数
WorkerManager::WorkerManager() {
	ifstream ifs;
	ifs.open(FILENAME, ios::in);

	//打开失败，文件不存在
	if (!ifs.is_open())
	{
		//cout << "文件不存在" << endl;
		this->_isFileEmpty = true;
		this->_workerArr = NULL;
		this->_workerCount = 0;
		ifs.close();
		return;
	}

	//文件存在，但是内容为空
	char ch;
	ifs >> ch;
	if (ifs.eof())
	{
		//cout << "文件不存在" << endl;
		this->_isFileEmpty = true;
		this->_workerArr = NULL;
		this->_workerCount = 0;
		ifs.close();
		return;
	}

	ifs.close();

	//文件存在且不为空
	GetWorkers();

}

//获取所有worker
void WorkerManager::GetWorkers() {
	ifstream ifs;
	ifs.open(FILENAME, ios::in);

	if (ifs.is_open())
	{
		int count = 0;
		//ifs.clear();
		//ifs.seekg(ios::beg); //这个是让流跳到指定的位置。因为前面测试的时候读取了一个字符，所以需要跳到开始位置

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
		while (ifs >> id && ifs >> name && ifs >> deptId && ifs >> station) //这里我反着读，反正顺序无关紧要
		{
			if (station == "大老板")
			{
				this->_workerArr[index] = new Boss(id, name, deptId);
			}
			else if (station == "项目经理")
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

//析构函数
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

//展示菜单
void WorkerManager::ShowMenu() {
	cout << "********************************************" << endl;
	cout << "**********  欢迎使用职工管理系统  **********" << endl;
	cout << "********************************************" << endl;
	cout << "************  1.增加职工信息  **************" << endl;
	cout << "************  2.显示职工信息  **************" << endl;
	cout << "************  3.删除离职职工  **************" << endl;
	cout << "************  4.修改职工信息  **************" << endl;
	cout << "************  5.查找职工信息  **************" << endl;
	cout << "************  6.按照编号排序  **************" << endl;
	cout << "************  7.清空所有文档  **************" << endl;
	cout << "************  0.退出管理系统  **************" << endl;
}

//展示所有worker信息
void WorkerManager::ShowWorkers() {
	if (this->_isFileEmpty)
	{
		cout << "文件不存在或记录为空" << endl;
	}
	else
	{
		for (int i = 0; i < this->_workerCount; i++)
		{
			this->_workerArr[i]->ShowInfo();
		}
	}
}

//退出程序
void WorkerManager::Exit() {
	cout << "欢迎下次使用" << endl;
	system("pause");
	exit(0);
}

//添加员工
void WorkerManager::Add() {
	while (true)
	{
		cout << "请输入你要添加的员工个数(退出=0)" << endl;
		int count = 0;
		cin >> count;

		if (count > 0)
		{
			//开辟新的空间
			int newCount = this->_workerCount + count;
			Worker* *newArr = new Worker*[newCount];

			//如果之前的指针不为空，将他们拷贝一份
			if (this->_workerArr != NULL)
			{
				for (int i = 0; i < this->_workerCount; i++)
				{
					newArr[i] = this->_workerArr[i];
				}
			}

			//添加新的数据
			int id;
			string name;
			int deptId;
			int selected = 0;
			for (int i = 0; i < count; i++)
			{
				cout << "请输入第" << i + 1 << "个新员工的编号" << endl;
				cin >> id;
				cout << "请输入第" << i + 1 << "个新员工的姓名" << endl;
				cin >> name;
				cout << "请输入第" << i + 1 << "个新员工的部门编号" << endl;
				cin >> deptId;

				cout << "请选择该新员工的岗位" << endl;
				cout << "1.普通员工" << endl;
				cout << "2.项目经理" << endl;
				cout << "3.大老板" << endl;
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
					cout << "输入有误，默认为普通员工" << endl;
					worker = new Employee(id, name, deptId);
					break;
				}

				newArr[this->_workerCount + i] = worker;
			}

			//释放原本的指针
			delete[] this->_workerArr; //如果为空指针是没问题的，因为C++允许释放空指针

			//将指针重新指向新开辟的内存空间
			this->_workerArr = newArr;
			newArr = NULL;

			//重新统计人数
			this->_workerCount = newCount;

			//记录文件
			this->Save();

			//文件不为空
			this->_isFileEmpty = false;

			cout << "恭喜添加" << count << "个员工成功" << endl;
			return;
		}
		else if (count == 0)
		{
			return;
		}
		else
		{
			cout << "输入有误，请重新输入!" << endl;
		}
	}
}

//保存文件
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

//是否存在员工
int WorkerManager::Exist(int id) {
	if (this->_isFileEmpty)
	{
		return -2; //文件不存在或者无记录
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

//删除worker
void WorkerManager::DeleteWorker() {
	cout << "请输入你要删除的员工编号" << endl;
	int selected = 0;
	cin >> selected;

	int index = this->Exist(selected);
	switch (index)
	{
	case -2:
		cout << "文件不存在或无记录" << endl;
		break;
	case -1:
		cout << "未能找到员工编号为" << selected << "的员工" << endl;
		break;
	default:
	{
		for (int i = index; i < this->_workerCount - 1; i++)
		{
			this->_workerArr[i] = this->_workerArr[i + 1];
		}
		this->_workerArr[_workerCount - 1] = NULL;
		this->_workerCount--;

		//保存至文件
		this->Save();
		cout << "删除员工编号为" << selected << "的员工成功" << endl;
		break;
	}
	}
}

//修改worker
void WorkerManager::ModifyWorker() {
	cout << "请输入你要修改的员工编号" << endl;
	int selected = 0;
	cin >> selected;

	int index = this->Exist(selected);

	switch (index)
	{
	case -2:
		cout << "文件不存在或无记录" << endl;
		break;
	case -1:
		cout << "未能找到员工编号为" << selected << "的员工" << endl;
		break;
	default:
	{
		//释放原来的对象
		delete this->_workerArr[index];

		int id;
		string name;
		int deptId;
		cout << "请输入员工的编号" << endl;
		cin >> id;
		cout << "请输入员工的姓名" << endl;
		cin >> name;
		cout << "请输入员工的部门编号" << endl;
		cin >> deptId;

		cout << "请选择该新员工的岗位" << endl;
		cout << "1.普通员工" << endl;
		cout << "2.项目经理" << endl;
		cout << "3.大老板" << endl;
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
			cout << "输入有误，默认为普通员工" << endl;
			worker = new Employee(id, name, deptId);
			break;
		}

		this->_workerArr[index] = worker;
		this->Save();
		cout << "修改员工编号为" << selected << "的员工成功" << endl;
		break;
	}

	}
}

//查找worker
void WorkerManager::SearchWorker() {	
	if (this->_isFileEmpty)
	{
		cout << "文件为空或无记录" << endl;
		return;
	}
	while (true)
	{
		cout << "请输入你要查找的方式:" << endl;
		cout << "1.按员工编号查找" << endl;
		cout << "2.按员工姓名查找" << endl;
		int mode;
		cin >> mode;
		if (mode == 1)
		{
			cout << "请输入你要查找的员工编号" << endl;
			int id;
			cin >> id;

			int index = this->Exist(id);
			if (index==-1)
			{
				cout << "查无此人" << endl;
			}
			else
			{
				cout << "员工编号为" << id << "的员工信息为如下:" << endl;
				this->_workerArr[index]->ShowInfo();
			}

			break;
		}
		else if (mode == 2)
		{
			cout << "请输入你要查找的员工姓名" << endl;
			string name;
			cin >> name;
			bool flag = false;
			for (int i = 0; i < this->_workerCount; i++)
			{
				if (this->_workerArr[i]->GetName()==name)
				{
					flag = true;
					cout << "员工姓名为" << name << "的员工信息为如下:" << endl;
					this->_workerArr[i]->ShowInfo();
					break; //只找一个就好了
				}
			}
			if (!flag)
				cout << "查无此人" << endl;	

			break;
		}
		else
		{
			cout << "输入方式有误" << endl;
			cout << "按任意键重来" << endl;
			system("pause");
			system("cls");
		}
	}
}

//排序
void WorkerManager::SortWorkers() {
	if (this->_isFileEmpty)
	{
		cout << "文件不存在或无记录" << endl;
	}
	else
	{
		cout << "请选择排序方式" << endl;
		cout << "1.按员工编号升序" << endl;
		cout << "2.按员工编号降序" << endl;
		int selected;
		cin >> selected;

		for (int i = 0; i < this->_workerCount-1; i++)
		{
			//先假设最当前索引为最值索引，与右边剩下的每个进行比较，出现新最值更新最值索引。每经过一轮产生一个最值索引
			int minOrMax = i;
			for (int j = minOrMax+1; j < this->_workerCount; j++)
			{
				//升序
				if (selected==1)
				{
					if (this->_workerArr[minOrMax]->GetId()>this->_workerArr[j]->GetId())
					{
						minOrMax = j;
					}
				}
				//降序
				else if (selected==2)
				{
					if (this->_workerArr[minOrMax]->GetId() < this->_workerArr[j]->GetId())
					{
						minOrMax = j;
					}
				}
			}

			//若最值索引发生变化，交换当前索引与最值索引对应的值
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

//清除
void WorkerManager::ClearFile() {
	cout << "确定清空所有数据？" << endl;
	cout << "1.确定	2.返回" << endl;
	int selected;
	cin >> selected;

	if (selected==1)
	{
		ofstream ofs(FILENAME,ios::trunc); //如果存在则删除之后再创建
		ofs.close();

		//维护数据
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

		cout << "清空成功!" << endl;
	}
}
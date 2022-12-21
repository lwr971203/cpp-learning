#include <iostream>
#include <string>
#define Max 1000
using namespace std;

//人类结构体
struct Person
{
	string name; //姓名
	int gender; //性别，1男 2女
	int age; //年龄
	string phoneNumber; //电话号码
	string address; //住址
};

//通讯录结构体
struct AddressBooks {
	Person persons[Max];
	int count; //人数
};

//展示菜单
void ShowMenu() {
	cout << "*******************************" << endl;
	cout << "*****    1、添加联系人    *****" << endl;
	cout << "*****    2、显示联系人    *****" << endl;
	cout << "*****    3、删除联系人    *****" << endl;
	cout << "*****    4、查找联系人    *****" << endl;
	cout << "*****    5、修改联系人    *****" << endl;
	cout << "*****    6、清空联系人    *****" << endl;
	cout << "*****    0、退出通讯录    *****" << endl;
	cout << "*******************************" << endl;
}

//添加联系人
void AddPerson(AddressBooks *abs) {
	//判断联系人是否已满
	if (abs->count == Max)
	{
		cout << "通讯录已满，无法添加" << endl;
		return;
	}
	else
	{
		string name = "";
		int gender = 0;
		int age = 0;
		string phone = "";
		string address = "";

		cout << "请输入姓名" << endl;
		cin >> name;

		while (true)
		{
			cout << "请输入性别(1为男，0为女)" << endl;
			cin >> gender;
			if (gender == 0 || gender == 1)
			{
				break;
			}
			cout << "输入有误，请重新输入" << endl;
		}

		cout << "请输入年龄" << endl;
		cin >> age;

		cout << "请输入电话号码" << endl;
		cin >> phone;

		cout << "请输入家庭住址" << endl;
		cin >> address;

		abs->persons[abs->count].name = name;
		abs->persons[abs->count].gender = gender;
		abs->persons[abs->count].age = age;
		abs->persons[abs->count].phoneNumber = phone;
		abs->persons[abs->count].address = address;

		cout << "添加成功!" << endl;
		abs->count++;
	}


}

//显示联系人
void ShowPersons(AddressBooks *abs) {
	if (abs->count == 0)
	{
		cout << "联系人为空";
		return;
	}
	else
	{
		for (int i = 0; i < abs->count; i++)
		{
			cout << "姓名:" << abs->persons[i].name << "\t";
			cout << "性别:" << (abs->persons[i].gender == 1 ? "男" : "女") << "\t";
			cout << "年龄:" << abs->persons[i].age << "\t";
			cout << "电话号码:" << abs->persons[i].phoneNumber << "\t";
			cout << "家庭住址:" << abs->persons[i].address << endl;
		}
	}

}

//联系人是否存在，返回索引
int ExistAt(AddressBooks *abs,string name) {
	for (int i = 0; i < abs->count; i++)
	{
		if (abs->persons[i].name==name)
		{
			return i;
		}	
	}
	return -1;
}

//删除指定的联系人
void DeletePerson(AddressBooks *abs,string name) {
	cout << "请选择你要删除的联系人" << endl;

	int select = ExistAt(abs,name);
	if (select == -1)
	{
		cout << "查无此人" << endl;	
		return;
	}
	else
	{
		for (int i = select; i < abs->count; i++)
		{
			abs->persons[i] = abs->persons[i + 1];
		}
		abs->count--;
		cout << "删除成功!" << endl;
	}
}

//查找联系人
void FindPerson(AddressBooks *abs) {
	cout << "请输入你要查找的联系人" << endl;
	string name;
	cin >> name;

	int index = ExistAt(abs,name);
	if (index==-1)
	{
		cout << "查无此人" << endl;
		return;
	}
	else
	{
		cout << "姓名:" << abs->persons[index].name << "\t";
		cout << "性别:" << abs->persons[index].gender << "\t";
		cout << "年龄:" << abs->persons[index].age << "\t";
		cout << "电话:" << abs->persons[index].phoneNumber << "\t";
		cout << "家庭住址:" << abs->persons[index].address << endl;
	}
}

//修改联系人
void ModifyPerson(AddressBooks *abs) {
	cout << "请输入你要修改的联系人" << endl;
	string name;
	cin >> name;

	int index = ExistAt(abs,name);
	if (index== -1)
	{
		cout << "对不起，查无此人" << endl;
	}
	else
	{
		Person *person = &abs->persons[index];
		string newName="";
		int gender = 0;
		int age = 0;
		string phone = "";
		string address = "";

		cout << "请输入修改的名字" << endl;
		cin >> newName;

		while (true)
		{
			cout << "请输入修改的性别" << endl;
			cin >> gender;
			if (gender == 0 || gender == 1)
			{
				break;
			}
			cout << "输入有误，请重新输入" << endl;
		}

		cout << "请输入年龄" << endl;
		cin >> age;

		cout << "请输入电话号码" << endl;
		cin >> phone;

		cout << "请输入家庭住址" << endl;
		cin >> address;

		person->name = newName;
		person->gender = gender;
		person->age = age;
		person->phoneNumber = phone;
		person->address = address;

		cout << "修改" << name << "成功" << endl;
	}
}

//清空联系人
void ClearPersons(AddressBooks *abs) {
	cout << "当前联系人有" << abs->count << "个,确定清空?(y/n)" << endl;
	char i = 'n';
	
	while (true)
	{
		cin >> i;
		if (i=='y')
		{
			//逻辑清空
			abs->count = 0;
			cout << "清空" << abs->count << "个联系人成功" << endl;
			return;
		}
		else if(i=='n')
		{
			cout << "取消..." << endl;
			return;
		}
		else
		{
			cout << "输入有误，请重新输入 (y/n)" << endl;
		}
	}
}

int main() {
	//创建通讯录结构体变量
	AddressBooks abs;
	abs.count = 0;
	while (true)
	{
		ShowMenu();
		int selectNum = 0;
		cin >> selectNum;
		switch (selectNum)
		{
		case 1: //1、添加联系人
			AddPerson(&abs);
			break;
		case 2: //2、显示联系人
			ShowPersons(&abs);
			break;
		case 3: //删除联系人
		{
			//C++中switch如果有多条语句的话需要使用{}
			cout << "请输入你要删除的联系人" << endl;
			string name="";
			cin>>name;
			DeletePerson(&abs,name);
			break;
		}
		case 4: //查找联系人
			FindPerson(&abs);
			break;
		case 5: //修改联系人
			ModifyPerson(&abs);
			break;
		case 6: //清空联系人
			ClearPersons(&abs);
			break;
		case 0: //退出通讯录
			cout << "欢迎下次使用" << endl;
			return 0;
		default:
			break;
		}

		cout << "请按任意键继续" << endl;
		system("pause");
		system("cls"); //清屏
	}

}
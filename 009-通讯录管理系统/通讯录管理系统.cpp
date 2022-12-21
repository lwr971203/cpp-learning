#include <iostream>
#include <string>
#define Max 1000
using namespace std;

//����ṹ��
struct Person
{
	string name; //����
	int gender; //�Ա�1�� 2Ů
	int age; //����
	string phoneNumber; //�绰����
	string address; //סַ
};

//ͨѶ¼�ṹ��
struct AddressBooks {
	Person persons[Max];
	int count; //����
};

//չʾ�˵�
void ShowMenu() {
	cout << "*******************************" << endl;
	cout << "*****    1�������ϵ��    *****" << endl;
	cout << "*****    2����ʾ��ϵ��    *****" << endl;
	cout << "*****    3��ɾ����ϵ��    *****" << endl;
	cout << "*****    4��������ϵ��    *****" << endl;
	cout << "*****    5���޸���ϵ��    *****" << endl;
	cout << "*****    6�������ϵ��    *****" << endl;
	cout << "*****    0���˳�ͨѶ¼    *****" << endl;
	cout << "*******************************" << endl;
}

//�����ϵ��
void AddPerson(AddressBooks *abs) {
	//�ж���ϵ���Ƿ�����
	if (abs->count == Max)
	{
		cout << "ͨѶ¼�������޷����" << endl;
		return;
	}
	else
	{
		string name = "";
		int gender = 0;
		int age = 0;
		string phone = "";
		string address = "";

		cout << "����������" << endl;
		cin >> name;

		while (true)
		{
			cout << "�������Ա�(1Ϊ�У�0ΪŮ)" << endl;
			cin >> gender;
			if (gender == 0 || gender == 1)
			{
				break;
			}
			cout << "������������������" << endl;
		}

		cout << "����������" << endl;
		cin >> age;

		cout << "������绰����" << endl;
		cin >> phone;

		cout << "�������ͥסַ" << endl;
		cin >> address;

		abs->persons[abs->count].name = name;
		abs->persons[abs->count].gender = gender;
		abs->persons[abs->count].age = age;
		abs->persons[abs->count].phoneNumber = phone;
		abs->persons[abs->count].address = address;

		cout << "��ӳɹ�!" << endl;
		abs->count++;
	}


}

//��ʾ��ϵ��
void ShowPersons(AddressBooks *abs) {
	if (abs->count == 0)
	{
		cout << "��ϵ��Ϊ��";
		return;
	}
	else
	{
		for (int i = 0; i < abs->count; i++)
		{
			cout << "����:" << abs->persons[i].name << "\t";
			cout << "�Ա�:" << (abs->persons[i].gender == 1 ? "��" : "Ů") << "\t";
			cout << "����:" << abs->persons[i].age << "\t";
			cout << "�绰����:" << abs->persons[i].phoneNumber << "\t";
			cout << "��ͥסַ:" << abs->persons[i].address << endl;
		}
	}

}

//��ϵ���Ƿ���ڣ���������
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

//ɾ��ָ������ϵ��
void DeletePerson(AddressBooks *abs,string name) {
	cout << "��ѡ����Ҫɾ������ϵ��" << endl;

	int select = ExistAt(abs,name);
	if (select == -1)
	{
		cout << "���޴���" << endl;	
		return;
	}
	else
	{
		for (int i = select; i < abs->count; i++)
		{
			abs->persons[i] = abs->persons[i + 1];
		}
		abs->count--;
		cout << "ɾ���ɹ�!" << endl;
	}
}

//������ϵ��
void FindPerson(AddressBooks *abs) {
	cout << "��������Ҫ���ҵ���ϵ��" << endl;
	string name;
	cin >> name;

	int index = ExistAt(abs,name);
	if (index==-1)
	{
		cout << "���޴���" << endl;
		return;
	}
	else
	{
		cout << "����:" << abs->persons[index].name << "\t";
		cout << "�Ա�:" << abs->persons[index].gender << "\t";
		cout << "����:" << abs->persons[index].age << "\t";
		cout << "�绰:" << abs->persons[index].phoneNumber << "\t";
		cout << "��ͥסַ:" << abs->persons[index].address << endl;
	}
}

//�޸���ϵ��
void ModifyPerson(AddressBooks *abs) {
	cout << "��������Ҫ�޸ĵ���ϵ��" << endl;
	string name;
	cin >> name;

	int index = ExistAt(abs,name);
	if (index== -1)
	{
		cout << "�Բ��𣬲��޴���" << endl;
	}
	else
	{
		Person *person = &abs->persons[index];
		string newName="";
		int gender = 0;
		int age = 0;
		string phone = "";
		string address = "";

		cout << "�������޸ĵ�����" << endl;
		cin >> newName;

		while (true)
		{
			cout << "�������޸ĵ��Ա�" << endl;
			cin >> gender;
			if (gender == 0 || gender == 1)
			{
				break;
			}
			cout << "������������������" << endl;
		}

		cout << "����������" << endl;
		cin >> age;

		cout << "������绰����" << endl;
		cin >> phone;

		cout << "�������ͥסַ" << endl;
		cin >> address;

		person->name = newName;
		person->gender = gender;
		person->age = age;
		person->phoneNumber = phone;
		person->address = address;

		cout << "�޸�" << name << "�ɹ�" << endl;
	}
}

//�����ϵ��
void ClearPersons(AddressBooks *abs) {
	cout << "��ǰ��ϵ����" << abs->count << "��,ȷ�����?(y/n)" << endl;
	char i = 'n';
	
	while (true)
	{
		cin >> i;
		if (i=='y')
		{
			//�߼����
			abs->count = 0;
			cout << "���" << abs->count << "����ϵ�˳ɹ�" << endl;
			return;
		}
		else if(i=='n')
		{
			cout << "ȡ��..." << endl;
			return;
		}
		else
		{
			cout << "������������������ (y/n)" << endl;
		}
	}
}

int main() {
	//����ͨѶ¼�ṹ�����
	AddressBooks abs;
	abs.count = 0;
	while (true)
	{
		ShowMenu();
		int selectNum = 0;
		cin >> selectNum;
		switch (selectNum)
		{
		case 1: //1�������ϵ��
			AddPerson(&abs);
			break;
		case 2: //2����ʾ��ϵ��
			ShowPersons(&abs);
			break;
		case 3: //ɾ����ϵ��
		{
			//C++��switch����ж������Ļ���Ҫʹ��{}
			cout << "��������Ҫɾ������ϵ��" << endl;
			string name="";
			cin>>name;
			DeletePerson(&abs,name);
			break;
		}
		case 4: //������ϵ��
			FindPerson(&abs);
			break;
		case 5: //�޸���ϵ��
			ModifyPerson(&abs);
			break;
		case 6: //�����ϵ��
			ClearPersons(&abs);
			break;
		case 0: //�˳�ͨѶ¼
			cout << "��ӭ�´�ʹ��" << endl;
			return 0;
		default:
			break;
		}

		cout << "�밴���������" << endl;
		system("pause");
		system("cls"); //����
	}

}
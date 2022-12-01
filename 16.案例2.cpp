#include <iostream>
using namespace std;
#define MAX 1

struct person {
	string name;
	int age;
	int gender;
	string address;
};

struct admin
{
	person PArr[MAX];
	int PArr_size;
};

void sys() {
	system("pause");
	system("cls");
}

void Menus() {
	cout << "select type---" << endl;
	cout << "1 add " << endl;
	cout << "2 showAll" << endl;
	cout << "3 delete" << endl;
	cout << "4 find" << endl;
	cout << "5 edit" << endl;
	cout << "6 clear" << endl;
	cout << "7 quit" << endl;
	cout << "-------------" << endl;
}

int findIndex(admin*a, string name) {
	for (int i = 0; i < a->PArr_size; i++)
	{
		if (a->PArr[i].name == name) return i;
	}
	return -1;
}
void add(admin* a, int type) {
	if (a->PArr_size == MAX) {
		cout << "���װ"  << MAX << "��" << endl;
		sys();
		return;
	}
	string name,address;
	int age, gender;
	cout << "����:" << endl;
	cin >> name;
	cout << "����: " << endl;
	cin >> age;
	while (true)
	{
		cout << "�Ա�0Ů1��: " << endl;
		cin >> gender;
		if (gender == 0 || gender == 1)break;
	}
	cout << "��ַ: " << endl;
	cin >> address;
	person next;
	next.name = name;
	next.age = age;
	next.gender = gender;
	next.address = address;
	if (type == 0) {
		a->PArr[a->PArr_size] = next;
		a->PArr_size++;
		cout << "������" << endl;
	}
	else {
		a->PArr[type] = next;
		cout << "�༭���" << endl;
	}
	sys();
}

void printInfo(admin* a, int i) {
	cout << "����---" << i << endl;
	cout << "����:" << a->PArr[i].name << endl;
	cout << "����: " << a->PArr[i].age << endl;
	cout << "�Ա�: " << (a->PArr[i].gender == 0 ? 'Ů' : '��') << endl;
	cout << "��ַ: " << a->PArr[i].address << endl;
	cout << "-------------------" << endl;
}

void showAll(admin* a) {
	//findIndex(a);
	if (!a->PArr_size) cout << "û�и�����Ϣ" << endl;
	for (int i = 0; i < a->PArr_size; i++)
	{
		printInfo(a, i);
	}
	sys();
}

void deleteOne(admin* a) {
	string name;
	cout << "ɾ��������:" << endl;
	cin >> name;
	int i = findIndex(a, name);
	if (i == -1)  cout << "ɾ�������ֲ�����" << endl;
	else if (i == 0) {
		a->PArr_size = 0;
	}
	else {
		for (;i < a->PArr_size - 1; i++)
		{
			a->PArr[i] = a->PArr[i + 1];
		}
		a->PArr_size--;
	}
	cout << "ɾ���ɹ�" << endl;
	sys();
}

void find(admin* a) {
	string name;
	cout << "���ҵ�����:" << endl;
	cin >> name;
	int i = findIndex(a, name);
	if (i == -1)  cout << "���������ֲ�����" << endl;
	else {
		printInfo(a, i);
	}
	sys();
}

void edit(admin* a) {
	string name;
	cout << "�޸�������:" << endl;
	cin >> name;
	int i = findIndex(a, name);
	if (i == -1) {
		cout << "�޸������ֲ�����" << endl;
		sys();
	}
	else {
		//printInfo(a, i);
		add(a, i);
	}
	
}

void clear(admin* a) {
	a->PArr_size = 0;
	cout << "���!" << endl;
}

int select(int * p, admin * a) {
	switch (*p)
	{
	case 1:
		add(a, 0);
		break;
	case 2:
		showAll(a);
		break;
	case 3:
		deleteOne(a);
		break;
	case 4:
		find(a);
		break;
	case 5:
		edit(a);
		break;
	case 6:
		clear(a);
		break;
	case 7:
		return 0;
	default:
		break;
	}
	return 1;

}

int main() {
	admin admin_1;
	admin_1.PArr_size = 0;
	int in;
	int type;
	while (true)
	{
		Menus();
		cin >> in;
		type = select(&in, &admin_1);
		if (type == 0) return 0;
	}
	system("pause");
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class Person
{
private:
	char* name;
	int age;
public:
	Person(const char* myname, int myage)
	{
		int len = strlen(myname) + 1;
		name = new char[len];
		strcpy(name, myname);
		age = myage;
	}
	Person(const Person& copy)						// ���������
	{
		cout << "���� ��������� ȣ��" << endl;
		//name = new char[strlen(copy.name) + 1];
		this -> name = new char[strlen(copy.name) + 1];			//new�����ڸ� ����Ͽ��� �޸� ���� �Ҵ��Ŀ� ���ڿ��� �����Ѵ�. �׸��� �Ҵ�� �޸��� �ּҰ��� name�� ����
		//strcpy(name, copy.name);
		strcpy(this->name, copy.name);
		//age = copy.age;
		this->age = copy.age;									//��� �� ����� ���� // �ּ��޸� �κ��� ���� �Ѱ� �ȴ޸� �κ��� ������� �ϽŰ�
	}
	void ShowPersonInfo() const
	{
		cout << "�̸�: " << name << endl;
		cout << "����: " << age << endl;
	}
	~Person()
	{
		delete[]name;
		cout << "called destructor!" << endl;
	}
};

int main(void)
{
	Person man1("Lee dong woo", 29);
	Person man2 = man1;
	man1.ShowPersonInfo();
	man2.ShowPersonInfo();
	return 0;
}
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class Person
{
private:
	char name[50];
	int age;
public:
	Person(const char* myname,int myage)
	{
		cout << "�θ� ������ ����" << endl;
		age = myage;
		strcpy(name, myname);
	}
	void WhatYouName() const {
		cout << "My name is " << name << endl;
	}
	void HowOldAreYou() const {
		cout << "I'm " << age << " years old" << endl;
	}
};

class UnivStudent : public Person {													// ����� �޾Ƶ��̴� ���� -> : Ŭ����
	string major;																	// ���ڿ��� ������ �� �ִ� Ÿ�� -> string
public:
	UnivStudent(const char* myname, int myage, string mymajor) : Person(myname, myage)
	{
		cout << "�ڽ� ������ ����" << endl;
		this->major = major;
		//this->age=myage;
	}
	void WhoAreYour() const {
		WhatYouName();
		HowOldAreYou();
	}
};

int main()
{
	UnivStudent s("ȫ�浿", 50, "���");
	s.WhoAreYour();
	
	return 0;
}
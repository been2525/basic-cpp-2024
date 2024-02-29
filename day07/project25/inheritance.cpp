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
		cout << "부모 생상자 실행" << endl;
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

class UnivStudent : public Person {													// 상속을 받아들이는 문법 -> : 클래스
	string major;																	// 문자열을 저장할 수 있는 타입 -> string
public:
	UnivStudent(const char* myname, int myage, string mymajor) : Person(myname, myage)
	{
		cout << "자식 생성자 실행" << endl;
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
	UnivStudent s("홍길동", 50, "백수");
	s.WhoAreYour();
	
	return 0;
}
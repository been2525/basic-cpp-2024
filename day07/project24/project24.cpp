#define _CRT_SECIRE_NO_WARNINGS
#include <iostream>
using namespace std;

class Person
{
private:
	char* name;
	int age;
public:
	Person(const char * pname, int aage)
	{
		age = aage;
		int len = strlen(pname) + 1;
		name = new char[len];
		strcpy(name, pname);
	}
	Person(const Person& copy)
	{
		int len = strlen(copy.name) + 1;
		name = new char[len];
		age = copy.age;
		strcpy(name, copy.name);
	}
	void personInfo()
	{
		cout << "이름: " << name << endl;
		cout << "나이: " << age << endl;
	}
};
int main()
{
	Person p("박성빈", 26);
	p.personInfo();

	Person copyp(p);
	copyp.personInfo();

	return 0;
}
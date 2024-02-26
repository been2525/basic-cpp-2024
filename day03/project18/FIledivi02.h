#include <iostream>
#include <cstring>
using namespace std;

class Human {				// human class(여러분이 만든 사용자 정의 자료형)
private:
	char name[20];
	int age;
	char job[20];
public:
	Human(const char* pname, int aage, const char* pjob)
	{
		age = aage;
		strcpy(name, pname);
		strcpy(job, pjob);
	}
	void showHuman();

};

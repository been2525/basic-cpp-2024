/*
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
	Person(const Person& other) {
		this->name = other.name;
		this->age = other.age;						//복사생성자
	}
	void ShowPersonInfo() const
	{
		cout << "이름: " << name << endl;
		cout << "나이: " << age << endl;
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
*/

/*
int func(int a){				// a=10; num의 10을 복사해서 사용한다
	a = 10+a;
	
	return a;					// a를 리턴한다.
}
int num = 10;
int res = func(num);					//res값이랑 a값이랑은 다른 값. 반환되기전에 복사를 시켜서 사용 그렇기에 다른 값.
										// 단 call - by- value일 경우에만
*/
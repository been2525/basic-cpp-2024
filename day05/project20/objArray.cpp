/*

객체배열
*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

class Human
{
private:
	char name[30];
	int age;

public:
	Human(const char* pname, int aage)
	{
		cout << "생성자 호출" << endl;
		strcpy(name, pname);
		age = aage;
		//this->age = age;
	}
	void HumanInfo()
	{
		cout << "이름: " << name << " ";
		cout << "나이: " << age << endl;
	}
	~Human()
	{
		cout << "소멸자 호출" << endl;
	}

};


int main()
{
	Human h[3] = { Human("홍길동", 50), Human("신짱구", 5) ,Human("신짱아", 2) }; //객체 배열

	for (int i = 0; i < 3; i++) {
		h[i].HumanInfo();
	}

	Human* h1 = new Human("가나다", 50);										//new 연산자를 이용하여서 // 객체 포인터로 멤버 접근
	h1->HumanInfo();															//(->)를 이용하여서 객체포인터를 가지고 접근한다. // 객체로 멤버접근
	//h1.HumanInfo();

	delete h1;
	
	return 0;
}
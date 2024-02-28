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
	Person(const Person& copy)						// 복사생성자
	{
		cout << "깊은 복사생성자 호출" << endl;
		//name = new char[strlen(copy.name) + 1];
		this -> name = new char[strlen(copy.name) + 1];			//new연산자를 사용하여서 메모리 공간 할당후에 문자열을 복사한다. 그리고 할당된 메모리의 주소값을 name에 저장
		//strcpy(name, copy.name);
		strcpy(this->name, copy.name);
		//age = copy.age;
		this->age = copy.age;									//멤버 대 멤버로 복사 // 주석달린 부분이 내가 한거 안달린 부분이 강사님이 하신것
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
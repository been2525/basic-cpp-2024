#include <iostream>
#include <cstring>
using namespace std;

class Person
{
private:
	char* name;
	int age;
public:
	Person(const char* myname, int myage)				// 입력 2개를 갖는 생성자
	{
		int len = strlen(myname) + 1;					// strlen()은 문자열의 길이를 구하는 함수 / null문자하나 붙여줘야함 strlen은 순수한 문자 수만 나옴
		name = new char[len];							// new라는 명령어를 발견하면 heap영역에 새로운메모리를 할당받음
		strcpy(name, myname);							// name와 myname은 다름.
		age = myage;

	}
	void ShowPersongInfo() const						// name과 age값이 바뀌면 안되서 const가 있음
	{
		cout << "이름: " << name << endl;
		cout << "나이: " << age << endl;
	}
	~Person()											// 소멸자
	{
		delete[]name;
		cout << "called destructor!" << endl;
	}
};

int main(void)
{
	Person man1("Lee dong woo", 29);
	Person man2("Jang dong gun", 41);
	man1.ShowPersongInfo();
	man2.ShowPersongInfo();
	return 0;
}
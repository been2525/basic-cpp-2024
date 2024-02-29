#include <iostream>
#include <cstring>
using namespace std;

class Myclass {
private:
	char name[30];
	int age;
	int getMyclass()
	{
		return name, age;
	}
};

class MyInfo : public Myclass {
private:
	char pNumber[20];
public:
	MyInfo(char* name, int age, const char* mypNumber) : Myclass(name, age)
	{
		name = new char[strlen(name + 1)];
		
		
	}
	void printMyInfo() {
		cout << "나의 이름은 " << name << "이고 나이는 " << age << "살이며 전화번호는 " << pNumber << "입니다." << endl;
	}
};

int main()
{
	MyInfo my("박성빈", 26, "010-1234-5678")
	my.printMyInfo();

	return 0;
}

//출력결과 -> "나의 이름은 xxx이거 나이는 xx살이며 전화번호는 xxxx입니다.
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
		cout << "���� �̸��� " << name << "�̰� ���̴� " << age << "���̸� ��ȭ��ȣ�� " << pNumber << "�Դϴ�." << endl;
	}
};

int main()
{
	MyInfo my("�ڼ���", 26, "010-1234-5678")
	my.printMyInfo();

	return 0;
}

//��°�� -> "���� �̸��� xxx�̰� ���̴� xx���̸� ��ȭ��ȣ�� xxxx�Դϴ�.
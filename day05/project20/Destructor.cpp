#include <iostream>
#include <cstring>
using namespace std;

class Person
{
private:
	char* name;
	int age;
public:
	Person(const char* myname, int myage)				// �Է� 2���� ���� ������
	{
		int len = strlen(myname) + 1;					// strlen()�� ���ڿ��� ���̸� ���ϴ� �Լ� / null�����ϳ� �ٿ������ strlen�� ������ ���� ���� ����
		name = new char[len];							// new��� ��ɾ �߰��ϸ� heap������ ���ο�޸𸮸� �Ҵ����
		strcpy(name, myname);							// name�� myname�� �ٸ�.
		age = myage;

	}
	void ShowPersongInfo() const						// name�� age���� �ٲ�� �ȵǼ� const�� ����
	{
		cout << "�̸�: " << name << endl;
		cout << "����: " << age << endl;
	}
	~Person()											// �Ҹ���
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
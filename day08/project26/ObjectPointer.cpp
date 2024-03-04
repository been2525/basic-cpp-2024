#include <iostream>
using namespace std;

class Person
{
public:
	void Sleep() { cout << "Sleep" << endl; }
};

class Student : public Person
{
public:
	void Study() { cout << "Study" << endl; } 
	//void Sleep() { cout << "Student Sleep" << endl; } // ��Ӱ��迡�� �ٽ� ���°��� �����ε�
};

class PartTimeStudent : public Student
{
public:
	void Work() { cout << "Work" << endl; }
};

int main(void)
{
	//Student* ptr0 = new Student();		������ Ÿ������ ����ϴ� ���� ��Ģ�̴�.
	// �θ�Ÿ���� ��ü �����ͷ� �ڽ� ��ü�� ����Ų��. ������ �ڽ�Ÿ���� ��ü �����ͷ� �θ� ��ü�� ����ų �� ����. �׸��� ������ ��ü �������� Ÿ���� ������.
	Person* ptr1 = new Student();
	Person* ptr2 = new PartTimeStudent();
	Student* ptr3 = new PartTimeStudent();
	ptr1->Sleep();		// ptr1 ��ü �����ʹ� Person, Sleep�̶�� �ż��带 ����ŭ
	ptr2->Sleep();		// PartTimeStuent��� ��ü�� ������ ����. �θ�Ÿ���� �ڽ��� ����ų�� ����.�θ�Ÿ���� �����Ͱ�ü�� ������ �ڽİ�ü�� ����Ű�� ����.
	ptr3->Study();
	delete ptr1; delete ptr2; delete ptr3;
	return 0;
}
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
	//void Sleep() { cout << "Student Sleep" << endl; } // 상속관계에서 다시 쓰는것이 오버로딩
};

class PartTimeStudent : public Student
{
public:
	void Work() { cout << "Work" << endl; }
};

int main(void)
{
	//Student* ptr0 = new Student();		동일한 타입으로 사용하는 것이 원칙이다.
	// 부모타입의 객체 포인터로 자식 객체를 가르킨다. 하지만 자식타입의 객체 포인터로 부모 객체는 가리킬 수 없다. 그리고 접근은 객체 포인터의 타입을 따른다.
	Person* ptr1 = new Student();
	Person* ptr2 = new PartTimeStudent();
	Student* ptr3 = new PartTimeStudent();
	ptr1->Sleep();		// ptr1 객체 포인터는 Person, Sleep이라는 매서드를 가리큼
	ptr2->Sleep();		// PartTimeStuent라는 객체를 가지고 있음. 부모타입은 자식을 가리킬수 있음.부모타입의 포인터객체를 가지고 자식객체를 가리키고 있음.
	ptr3->Study();
	delete ptr1; delete ptr2; delete ptr3;
	return 0;
}
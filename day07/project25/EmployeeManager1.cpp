#include<iostream>
using namespace std;

class PermanentWorker
{
private:
	char name[100];
	int salary;
public:
	PermanentWorker(const char* name, int money) : salary(money)
	{
		strcpy_s(this->name, name);
	}
	int GetPay() const
	{
		return salary;
	}
	void ShowSalaryInfo() const
	{
		cout << "name: " << name << endl;
		cout << "salary: " << GetPay() << endl << endl;
	}
};


class EmployeeHandler
{
private:
	PermanentWorker* empList[50];						// 객체 포인터 배열
	int empNum;
public:
	EmployeeHandler():empNum(0)
	{ }
	void AddEmployee(PermanentWorker* emp)				// 정규직 객체의 포인터를 받아서 empList 배열에 집어넣는다.
	{
		empList[empNum++] = emp;						// 집어넣고나서 증가
	}
	void ShowAllSalatyInfo() const
	{
		for (int i = 0; i < empNum; i++)
			empList[i] -> ShowSalaryInfo();				// empList 배열의 요소값을 통해서 멤버함수에 접근
	}
	void ShowTotalSalary() const
	{
		int sum = 0;
		for (int i = 0; i < empNum; i++)
			sum += empList[i]->GetPay();
		cout << "salary sum: " << sum << endl;
	}
	~EmployeeHandler()
	{
		for (int i = 0; i < empNum; i++)
			delete empList[i];
	}
};

int main(void)
{
	EmployeeHandler handler;

	handler.AddEmployee(new PermanentWorker("KIM", 1000));
	handler.AddEmployee(new PermanentWorker("LEE", 1500));
	handler.AddEmployee(new PermanentWorker("Jun", 2000));

	handler.ShowAllSalatyInfo();

	handler.ShowTotalSalary();
	return 0;
}
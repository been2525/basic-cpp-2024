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
	PermanentWorker* empList[50];						// ��ü ������ �迭
	int empNum;
public:
	EmployeeHandler():empNum(0)
	{ }
	void AddEmployee(PermanentWorker* emp)				// ������ ��ü�� �����͸� �޾Ƽ� empList �迭�� ����ִ´�.
	{
		empList[empNum++] = emp;						// ����ְ����� ����
	}
	void ShowAllSalatyInfo() const
	{
		for (int i = 0; i < empNum; i++)
			empList[i] -> ShowSalaryInfo();				// empList �迭�� ��Ұ��� ���ؼ� ����Լ��� ����
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
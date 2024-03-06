#include <iostream>
using namespace std;

class Grade
{
private:
	char* name;
	int kr;
	int math;
	int english;
public:
	Grade(const char* myname, int k = 0, int m = 0, int e = 0) : kr(k), math(m), english(e)
	{
		int len = strlen(myname) + 1;
		name = new char[len]+1;
		strcpy(name, myname);
	}
	Grade operator+(const Grade& pos)const
	{
		return Grade(kr + pos.kr, math + pos.math, english + pos.english);
	}
	~Grade()
	{

	}
	void ShowGrade()
	{
		cout << name << ", " << kr << ", " << math << ", " << english << endl;
	}
};

class Adder
{
public:
	int operator()(const int& n1, const int& n2)
	{
		return n1 + n2;
	}
	double operator()(const double& e1, const double e2)
	{
		return e1 + e2;
	}
	Grade operator()(const Grade& pos1, const Grade& pos2)
	{
		return pos1 + pos2;
	}
};

int main(void)
{
	// 5명의 학생 정보 입력
	for (int i = 0; i < 5; ++i) {
		string name;
		int korean, english, math;
		cout << "Enter 학생 " << i + 1 << "'s name: ";
		cin >> name;
		cout << "Enter 국어 score: ";
		cin >> korean;
		cout << "Enter 영어 score: ";
		cin >> english;
		cout << "Enter 수학 score: ";
		cin >> math;
		cout << endl;


	return 0;
}
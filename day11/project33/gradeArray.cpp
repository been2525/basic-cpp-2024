/*
5���� �̸��� ��,��,�� 3������ �Է¹޾� �л��� ������ ���, �׸��� ���� ������ ����� ���Ͻÿ�.
1. ��ü ������ �迭 ���
*/
#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <vector>
using namespace std;


class Grade
{
	char* name;					
	int ko;
	int eng;
	int math;
public:
	Grade(const char* name, int ko, int eng, int math)
	{
		this->name = new char[strlen(name) + 1];
		strcpy(this->name, name);
		this->ko = ko;
		this->eng = eng;
		this->math = math;

	}
	Grade() {
		cout << "������ ȣ��" << endl;
		
	}
	Grade* operator->()
	{
		return this;
	}

	~Grade()
	{
		printf("�Ҹ��� ȣ��\n");
		delete[] name;
	}
	int getko()
	{
		return ko;
	}
	int geteng()
	{
		return eng;
	}
	int getmath()
	{
		return math;
	}
	int sum()
	{
		int sum = ko + eng + math;
		return sum;
	}
	double avr()
	{
		double avr = sum() / 3.0;
		return avr;
	}

};


int main()
{

	//Grade* gradeAry[3];				// ��ü ������ �迭
	//Grade gradeAry[100];					//	��ü�迭

	char name[20] = {};
	int inKo;
	int inEng;
	int inMath;
	int kosum = 0;
	int Engsum = 0;
	int Mathsum = 0;
	double koavr = 0;
	double Engavr = 0;
	double Mathavr = 0;
	int num;

	cout << "����ó�� �л���: " << endl;
	cin >> num;
	vector<Grade> gradeAry(num);					// �����迭�Ҵ������ ����Ѵ�.
	//vector<Grade*> gradeAry(num);
	//1. �ϳ��� �Է��� �޴´�->5���Է�
	for (int i = 0; i < num; i++)
	{
		cout << "�̸� : ";
		cin >> name;
		cout << "�������� : ";
		cin >> inKo;
		cout << "�������� : ";
		cin >> inEng;
		cout << "�������� : ";
		cin >> inMath;

		cout << name << inKo << inEng << inMath << endl;
		//2. ��ü����: 5���� ��ü�� ����(2). ��ü�迭 or ��ü ������ �迭
		gradeAry[i] = Grade(name, inKo, inEng, inMath);
		kosum = kosum + inKo;
		Engsum = Engsum + inEng;
		Mathsum = Mathsum + inMath;
	}
	koavr = kosum / 3.0;
	Engavr = Engsum / 3.0;
	Mathavr = Mathsum / 3.0;

	for (int i = 0; i < num; i++)
	{
		printf("%d° �л� ����: %d, ����: %.1lf\n", i + 1, gradeAry[i].sum(), gradeAry[i]->avr());
	}


	cout << "�������� : " << kosum << " " << "�������� : " << Mathsum << " " << "�������� : " << Engsum << " " << endl;
	cout << "������� : " << koavr << " " << "������� : " << Mathavr << " " << "������� : " << Engavr << " " << endl;
	/* new �����ڷ� �����Ҵ�������� ���
	for (int i = 0; i < 3; i++)
	{
		printf("��ü �Ҵ� �Ҹ��� ȣ��\n");
		delete [i]gradeAry;
	}
	*/
	return 0;
}
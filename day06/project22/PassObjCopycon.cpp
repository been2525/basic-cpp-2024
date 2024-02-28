#include <iostream>
using namespace std;

class SoSimple
{
private:
	int num;
public:
	SoSimple(int n) :num(n)
	{ }
	SoSimple(const SoSimple& copy) : num(copy.num)
	{
		cout << "Called SoSimple(const SoSimple& copy)" << endl;
	}
	void ShowData()											// (class�� ����)����Լ� -> ��ü ���� �Ŀ� ����� �����ϴ�.
	{
		cout << "num: " << num << endl;
	}
};

void SimpleFunObj(SoSimple ob)						// (��𿡵� �ҼӵǾ����� ����)�����Լ� -> �ƹ��� �ٷ� ������ �����ϴ�.
{													// �Է����� ��ü�� �ְ� ����			
	ob.ShowData();									
}

int main(void)
{
	SoSimple obj(7);
	cout << "�Լ�ȣ�� ��" << endl;
	SimpleFunObj(obj);								// ��ü�� ������ �ִ� �Ű������� ���� ��� / obj�� �������ִ� �μ�/ copy = obj�� �ȴ�.
	cout << "�Լ�ȣ�� ��" << endl;
	return 0;
}
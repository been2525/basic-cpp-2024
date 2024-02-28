#include <iostream>
using namespace std;

class SoSimple
{
private:
	int num;
public:
	SoSimple(int n) : num(n)
	{
		cout <<  "New Object: " << this << endl;
	}
	SoSimple(const SoSimple& copy) :num(copy.num)
	{
		cout << "New Copy obj: " << this << endl;
	}
	~SoSimple()
	{
		cout << "Destroy obj" << this << endl;
	}
};

SoSimple SimpleFuncObj(SoSimple ob)
{
	cout << "Parm ADR: " << &ob << endl;				//&ob: ��üob�� �ּ� /&�ּҿ����� / &���������ڷ� ��������� ���⼭�� �ּҿ����ڷ� ���
	return ob;
}

int main(void)
{
	SoSimple obj(7);
	SimpleFuncObj(obj);

	cout << endl;
	SoSimple tempRef = SimpleFuncObj(obj);		// �ӽð�ü �ּ�����
	cout << "Return Obj " << &tempRef << endl;
	return 0;
}
/*
New Object: 000000F905D1F994  :  ��üobj �ּ�
New Copy obj: 000000F905D1FA94	:	��üob�ּ�
Parm ADR: 000000F905D1FA94	:	��üob�ּ�
New Copy obj: 000000F905D1FAD4	: �ӽð�ü �ּ�
Destroy obj000000F905D1FA94	:	��üob�Ҹ�
Destroy obj000000F905D1FAD4	: �ӽð�ü �Ҹ�

New Copy obj: 000000F905D1FAF4	:	��üob �ּ�
Parm ADR: 000000F905D1FAF4	:	��ü ob�ּ�
New Copy obj: 000000F905D1F9B4	: return���� ���Ͽ� �ӽð�ü �ּ�����
Destroy obj000000F905D1FAF4	: ��üob �Ҹ�
Return Obj 000000F905D1F9B4	: �ӽð�ü �ּ�
Destroy obj000000F905D1F9B4	: �ӽð�ü �Ҹ�
Destroy obj000000F905D1F994	: ��ü obj �Ҹ�
*/
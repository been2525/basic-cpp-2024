#include<iostream>
#include"FIledivi02.h"

Human::Human;

void Human::showHuman()		//���: ����Լ�
{
	char name[20];
	int age;
	char job[20];
	printf("���� % d����  % s % s �Դϴ�.\n", age, job, name);//���� 50���� ��� ȫ�浿�Դϴ�.
}
int main()
{
	

	Human h("ȫ�浿", 50, "����");			// ��ü�������
	h.showHuman();							//���� 50���� ��� ȫ�浿�Դϴ�.

	return 0;
}
/* file : struct01
*  desc : struct01(cŸ���� ����ü : ��������� ������.)
*  date : 2024-02-23
*/

#include <iostream>


typedef struct human {				// human ����ü(�������� ���� ����� ���� �ڷ���)
	char name[20];			// �Ӽ�; �������(name, age, job)
	int age;
	char job[20];

}Human;				// ������ human ����ü�� Human���� ����ϰڴ�

void showHuman(Human h)
{
	printf("name: %s age : %d job : %s\n", h.name, h.age, h.job);
}

int main()
{
	int a;
	human h1 = { "ȫ�浿", 50, "����" };  //HumanŸ���� ������ �����ϰ� �ʱ�ȭ�� ��Ų��.
	showHuman(h1);
	
	return 0;
}
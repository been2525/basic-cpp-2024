#include<iostream>
# include"Filedivi.h"

AClass::AClass(int anum) {
	num = anum;
}
void AClass::AInfo() {
	std::cout << "AClass::num:" << num << std::endl;
}
int main()
{
	AClass a(10);			// a(10)�� 10��° �ٿ��ִ� AClassȣ���Ͽ��� 10�� �Է�(������ ȣ��)
	a.AInfo();

	Human h("ȫ�浿", 50, "����");			// ��ü�������
	h.humanInfo();							//���� 50���� ��� ȫ�浿�Դϴ�.


	return 0;
}
// date : 
#include<iostream>


class AClass {
private:							//�������� �����ص� private�����
	int num;						// �Ӽ����� public���� private���

public:								// �ܺο��� ���ٰ����ϰ� ����(��������������)
	AClass(int anum) {				// ������ : �ʱ�ȭ ���
		num = anum;
	}
	void AInfo() {
		std::cout << "A::num:" << num << std::endl;
	}
};
int main()
{
	AClass a(10);			// a(10)�� 10��° �ٿ��ִ� AClassȣ���Ͽ��� 10�� �Է�(������ ȣ��)
	a.AInfo();

	return 0;
}
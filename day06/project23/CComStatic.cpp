#include <iostream>
using namespace std;

void Counter()
{
	static int cnt;											// static������ �ѹ��� �ʱ�ȭ, (������ �������)�ݴ� ��ȣ������ �׾ static���� ������ִ� ������ �����ʴ´�.
	//int cnt = 0;											// �̷��� �����ϸ� Current cnt: 1�� 10��������.
	cnt++;
	cout << "Current cnt: " << cnt << endl;
}															// �ٵ��� ����� ���ƿ��� �����ߴ������� ������ �ȴ�. ī���� �Լ� �����ϰ� �ݴ°����� �������� �����ߴ� ���� ����

int main(void)
{
	for (int i = 0; i < 10; i++)
		Counter();
	return 0;
}
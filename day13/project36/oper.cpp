#include <iostream>
using namespace std;

void cal(int aa, int ab)
{
	if (!ab) throw ab;
	cout << aa << " * " << ab << " = " << aa * ab << endl;
	cout << aa << " + " << ab << " = " << aa + ab << endl;
	cout << aa << " - " << ab << " = " << aa - ab << endl;
	cout << aa << " / " << ab << " = " << aa / ab << endl;
}

int main(void)
{
	int a, b;
	cout << ">";
	cin >> a >> b;
	try                                    //try�� ȥ�� ��� �Ұ�
	{
		cal(a, b);
	}
	catch (int exception)				// catch�� ����Ͽ��� ���ܸ� ����.
	{
		cout << "0���� ������ �����ϴ�." << endl;
	}
	
	/*try
	{
		if (!b) throw b;
		cout << a << " / " << b << " = " << a / b << endl;
	}
	catch (int exception)
	{
		cout << "0���� ������ �����ϴ�." << endl;
	}*/

	return 0;
}
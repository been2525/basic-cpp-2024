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
	try                                    //try는 혼자 사용 불가
	{
		cal(a, b);
	}
	catch (int exception)				// catch를 사용하여서 예외를 잡음.
	{
		cout << "0으로 나눌수 없습니다." << endl;
	}
	
	/*try
	{
		if (!b) throw b;
		cout << a << " / " << b << " = " << a / b << endl;
	}
	catch (int exception)
	{
		cout << "0으로 나눌수 없습니다." << endl;
	}*/

	return 0;
}
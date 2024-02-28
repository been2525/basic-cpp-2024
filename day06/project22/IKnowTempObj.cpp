#include <iostream>
using namespace std;

class Temporary
{
private:
	int num;
public:
	Temporary(int n) : num(n)
	{
		cout << "create obj: " << num << endl;
	}
	~Temporary()
	{
		cout << "destroy obj: " << num << endl;
	}
	void ShowTempInfo()
	{
		cout << "My num is " << num << endl;
	}
};

int main(void)
{
	Temporary(100);												// Temporary t(100); /객체이름없이 사용  -> 이름없는 임시객체
	cout << "********** after make!" << endl << endl;

	Temporary(200).ShowTempInfo();								//  생성과 동시에 사라짐
	cout << "********** after make!" << endl << endl;

	const Temporary& ref = Temporary(300);						// const없이는 사용안됨/ 임시객체는 참조가 안됨 하지만 const붙이면 가능
	cout << "********** end of main!" << endl << endl;
	return 0;
}
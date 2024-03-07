#include <iostream>
using namespace std;

class Number
{
private:
	int num;
public:
	Number(int n = 0) : num(n)
	{
		cout << "Number(int n=0)" << endl;
	}
	Number& operator = (const Number& ref)
	{
		cout << "operator=()" << endl;
		num = ref.num;
		return *this;
	}
	void ShowNumber() { cout << num << endl; }
};

int main(void) {
	/*
	int a =10;
	int b = a;
	double = 3.14;
	a=d;
	d=a;
	*/
	Number num;
	num = 30;					//서로다른 두 자료형의 피연산자를 대상으로 대입연산을 진행
	num.ShowNumber();
	return 0;
}
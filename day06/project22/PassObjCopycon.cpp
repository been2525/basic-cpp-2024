#include <iostream>
using namespace std;

class SoSimple
{
private:
	int num;
public:
	SoSimple(int n) :num(n)
	{ }
	SoSimple(const SoSimple& copy) : num(copy.num)
	{
		cout << "Called SoSimple(const SoSimple& copy)" << endl;
	}
	void ShowData()											// (class에 속한)멤버함수 -> 객체 생성 후에 사용이 가능하다.
	{
		cout << "num: " << num << endl;
	}
};

void SimpleFunObj(SoSimple ob)						// (어디에도 소속되어있지 않은)전역함수 -> 아무나 바로 접근이 가능하다.
{													// 입력으로 객체를 주고 있음			
	ob.ShowData();									
}

int main(void)
{
	SoSimple obj(7);
	cout << "함수호출 전" << endl;
	SimpleFunObj(obj);								// 객체를 받을수 있는 매개변수를 만들어서 사용 / obj는 전달해주는 인수/ copy = obj가 된다.
	cout << "함수호출 후" << endl;
	return 0;
}
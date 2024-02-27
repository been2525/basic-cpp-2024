#include <iostream>
#include <cstring>
using namespace std;

class SoSimple
{
private:
	int num;
public:
	SoSimple(int num)
	{
		this->num = num;					// this는 객체의 자기자신을 가리킴
		cout << "num=" << num << ", ";
		cout << "address=" << this << endl;
	}
	void ShowSimpleData()					// 멤버함수들은 단 하나만 생성됨 그 이후에 만들어지는 멤버함수들은 공유함
	{
		cout << num << endl;
	}
	SoSimple* GetThisPointer()
	{
		return this;
	}

};

int main(void)
{
	SoSimple sim1(100);
	SoSimple* ptr1 = sim1.GetThisPointer();
	cout << ptr1 << ", ";
	ptr1->ShowSimpleData();

	SoSimple sim2(200);
	SoSimple* ptr2 = sim2.GetThisPointer();
	cout << ptr2 << ", ";
	ptr2->ShowSimpleData();
	return 0;
}
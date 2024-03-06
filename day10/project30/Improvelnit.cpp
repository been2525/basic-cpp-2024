#include <iostream>
using namespace std;

class AAA
{
private:
	int num;
public:
	AAA(int n = 0) : num(n)						// 정수 하나를 입력으로 갖는 생성자
	{
		cout << "AAA(int n=0)" << endl;
	}
	AAA(const AAA& ref) : num(ref.num)			// 객체를 입력으로 갖는 생성자
	{
		cout << "AAA(const AAA& ref)" << endl;
	}
	AAA& operator=(const AAA& ref)				// 대입연산자 오버로딩
	{
		num = ref.num;
		cout << "operator=(const AAA& ref)" << endl;
		return *this;
	}
};

class BBB
{
private:
	AAA men;								//AAA타입의 객체
public:
	BBB(const AAA& ref) : men(ref) { }		// 멤버이니셜라이즈(콜론초기화)를 통해서 초기화
};

class CCC
{
private:
	AAA men;
public:
	CCC(const AAA& ref) { men = ref; }		// 대입연산을 통해서 초기화
};

int main(void)
{
	AAA obj1(12);
	cout << "********************" << endl;
	BBB obj2(obj1);
	cout << "********************" << endl;
	CCC obj3(obj1);
	return 0;
}
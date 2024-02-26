#include <iostream>
using namespace std;

class MyClass // 클래스 첫글자는 대문자 사용
{
	int num;

public:
	MyClass()
	{
		cout << "생성자 호출: MyClass()" << endl;			// 디폴트 생성자
		num = 10;
	}
	MyClass(int anum)
	{
		cout << "생성자 호출: MyClass(int )" << endl;
		num = anum;			// 생성자 오버로딩
	}
	void MyClassInfo()
	{
		cout << "num : " << num << endl;
	}
};
int main()
{
	//MyClass *m = new MyClass();
	MyClass m1; // 객체생성 명령으로 생성자는 자동 호출 된다.
	m1.MyClassInfo();
	MyClass m2(20);
	m2.MyClassInfo();

	return 0;
}
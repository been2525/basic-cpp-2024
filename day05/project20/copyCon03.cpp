#include <iostream>
using namespace std;

class AA {
	int a;
	int b;
public:
	AA(int a, int b) {
		this->a = a;
		this->b = b;
	}
	void AAInfo() {
		cout << a << " " << b << endl;
	}
	AA(const AA& copy)
	{
		this->a = copy.a;				// 복사 생성자 초기화 하는 방법
		this->b = copy.b;				// 초기화 할때 앞에 변수 앞에 위에서 & 뒤에 있는 값을 앞에 적음
										// 복사할 때 위에 선언한 것을 복사하기 때문에 위에 내용을 일단 따라쓴후 뒤에 내용에 &뒤에 있는 내용을 적음.
	}
};

int main()
{
	AA obj1(10, 20);
	obj1.AAInfo();

	AA obj2(obj1);
	obj2.AAInfo();

	return 0;
}
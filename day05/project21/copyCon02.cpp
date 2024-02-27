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
};

int main()
{
	AA obj1(10, 20);
	obj1.AAInfo();
	
	AA obj2(obj1);			// 출력함수 안만들었지만 복사생성자가 복사를 했기 때문에 안만들어도 알아서 생성시켜줌.
	obj2.AAInfo();


	return 0;
}
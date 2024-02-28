#include <iostream>
using namespace std;

class SoSimple
{
private:
	int num;
public:
	SoSimple(int n) : num(n)
	{ }
	SoSimple& AddNum(int n)
	{
		num += n;
		return *this;
	}
	void SimpleFunc()
	{
		cout << "SImpleFunc: " << num << endl;
	}
	void SimpleFunc() const
	{
		cout << "const SImpleFunc: " << num << endl;
	}
};

void YourFunc(const SoSimple& obj)			// 전달하는 인자를 const 참조자로 받는다.
{
	obj.SimpleFunc();
}

int main(void)
{
	SoSimple obj1(2);
	const SoSimple obj2(7);

	obj1.SimpleFunc();
	obj2.SimpleFunc();

	YourFunc(obj1);
	YourFunc(obj2);
	return 0;
}
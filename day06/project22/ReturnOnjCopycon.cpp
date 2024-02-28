#include <iostream>
using namespace std;

class SoSimple
{
private:
	int num;
public:
	SoSimple(int n) : num(n)
	{ }
	SoSimple(const SoSimple& copy) :num(copy.num)
	{
		cout << "Called SoSimple(const SoSimple& copy) 복사생성자 호출" << endl;
	}
	SoSimple& AddNum(int n)
	{
		num += n;				// num = num + n;
		return *this;			// 객체 자기자신을 전달
	}
	void ShowData()
	{
		cout << "num: " << num << endl;
	}
};

SoSimple SimpleFunObj(SoSimple ob)
{
	cout << "return 이전" << endl;
	return ob;
}
int main(void)
{
	SoSimple obj(7);
	SimpleFunObj(obj).AddNum(30).ShowData();			// SoSimple re = SimpleFunObj(obj);
	obj.ShowData();
	return 0;
}
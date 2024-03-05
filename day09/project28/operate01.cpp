#include<iostream>
using namespace std;

class Myclass
{
private:
	int num;
public:
	Myclass(int n=0) : num(n)
	{ }
	void print() const
	{
		cout << num << endl;
	}
	Myclass operator+(const Myclass& pos1)
	{
		Myclass pos(pos1.num + pos1.num+pos1.num);
		return pos;
	}
};


int main(void)
{
	Myclass a(10);
	a.print();

	Myclass b(a);
	b.print();

	Myclass c = b;
	b.print();

	Myclass d = a + b + c;
	d.print();

	return 0;
}
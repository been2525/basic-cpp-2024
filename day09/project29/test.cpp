#include <iostream>
using namespace std;

class Point
{
private:
	int num1, num2;
public:
	Point(int n1=0,int n2=0) : num1(n1), num2(n2)
	{ }
	void viewPoint() { cout << num1 << ", " << num2 << endl; }
	friend Point operator+(const Point& pos1, const Point& pos2);
	friend ostream& operator<<(ostream& os, const Point& pos);
};

ostream& operator<<(ostream& os, const Point& pos)						// 여기 때문에 출력부분에서 <<작동할수 있게해줌
{
	os << '[' << pos.num1 << ", " << pos.num2 << ']' << endl;
	return os;
}

Point operator+(const Point& pos1, const Point& pos2)
{
	Point pos(pos1.num1 + pos2.num1, pos1.num2 + pos2.num2);
	return pos;
}


int main(void)
{
	Point a(10, 20);
	Point b(30, 40);
	Point c = a + b;
	Point d = a + 100;
	Point e = 100 + a;

	d.viewPoint();
	e.viewPoint();

	std::cout << c << std::endl;		//위에 ostream을 안쓰니 <<가 작동안함 이유는 몰루~
	std::cout << d << std::endl;
	std::cout << e << std::endl;


	return 0;
}
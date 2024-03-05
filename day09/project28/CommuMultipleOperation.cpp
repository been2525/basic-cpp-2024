#include <iostream>
using namespace std;

class Point
{
private:
	int  xpos, ypos;
public:
	Point(int x=0, int y=0) : xpos(x), ypos(y)
	{ }
	void Showposition() const
	{
		cout << '[' << xpos << ", " << ypos << ']' << endl;
	}
	Point operator*(int times)
	{
		Point pos(xpos * times, ypos * times);
		return pos;
	}
	friend Point operator*(int times, Point& ref);
};

Point operator*(int times, Point& ref)
{
	return ref * times;				//return ref.operator*(times);
}

int main(void)
{
	Point pos(1, 2);
	Point cpy;

	cpy = 3 * pos;
	cpy.Showposition();

	cpy = 2 * pos * 3;
	cpy.Showposition();
	return 0;
}
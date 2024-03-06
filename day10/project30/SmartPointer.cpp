#include <iostream>
using namespace std;

class Point
{
private:
	int xpos, ypos;
public:
	Point(int x = 0, int y = 0) : xpos(x), ypos(y)
	{
		cout << "Point ��ü ����" << endl;
	}
	~Point()
	{
		cout << "Point ��ü �Ҹ�" << endl;
	}
	void Setpos(int x, int y)
	{
		xpos = x;
		ypos = y;
	}
	friend ostream& operator<<(ostream& os, const Point& pos);
};
ostream& operator<<(ostream& os, const Point& pos)
{
	os << '[' << pos.xpos << ", " << pos.ypos << ']' << endl;
	return os;
}

class SmartPtr
{
private:
	Point* posptr;
public:
	SmartPtr(Point * ptr) : posptr(ptr)
	{ }

	Point& operator*() const
	{
		return *posptr;
	}
	Point* operator->() const
	{
		return posptr;
	}
	~SmartPtr()
	{
		delete posptr;
	}
};

int main(void)
{
	SmartPtr sptr1(new Point(1, 2));
	SmartPtr sptr2(new Point(2, 3));
	SmartPtr sptr3(new Point(4, 5));
	cout << *sptr1;
	cout << *sptr2;
	cout << *sptr3;

	sptr1->Setpos(10, 20);
	sptr2->Setpos(30, 40);
	sptr3->Setpos(50, 60);
	cout << *sptr1;
	cout << *sptr2;
	cout << *sptr3;
	return 0;
}
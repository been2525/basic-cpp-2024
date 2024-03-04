#include <iostream>
using namespace std;

class RemoteControl
{
public:
	virtual void on() { }
};

class samsungTv : public RemoteControl
{
public:
	virtual void on() { cout << "�Ｚ TV on" << endl; }
};

class LgTv : public RemoteControl
{
public:
	virtual void on() { cout << "���� Tv on" << endl; }
};

int main(void)
{
	RemoteControl* remote1 =new LgTv();
	remote1->on();
	
	RemoteControl* remote2 = new samsungTv();

	remote2->on();
	return 0;
}
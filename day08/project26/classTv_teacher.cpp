#include <iostream>
using namespace std;

class RemoteControl
{
public:
	virtual void on()
	{
		std::cout << "Tv�� �մϴ�." << std::endl;
	}
};

class SamsungTv : public RemoteControl
{
	void on()
	{
		std::cout << "SamsungTv on" << std::endl;
	}
};

class LgTv : public RemoteControl
{
	void on()
	{
		std::cout << "LgTv on" << std::endl;
	}
};

int main()
{
	RemoteControl* remote = new SamsungTv();
	remote->on();

	remote = new LgTv();
	remote->on();

	delete remote;
}

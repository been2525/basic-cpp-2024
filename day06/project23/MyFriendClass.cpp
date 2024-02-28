#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <cstring>
using namespace std;

class Girl;

class Boy
{
private:
	int height;
	friend class Girl;
public:
	Boy(int len) : height(len)
	{ }
	void ShowYourFriendInfo(Girl& frn);
};

class Girl
{
private:
	char phNum[20];
public:
	Girl(const char* num)
	{
		strcpy(phNum, num);
	}
	void ShowYoutFriendInfo(Boy& frn);						// ¼±¾ðºÎ
	friend class Boy;
};

void Boy::ShowYourFriendInfo(Girl& frn)
{
	cout << "Her phone number: " << frn.phNum << endl;
}

void Girl::ShowYoutFriendInfo(Boy& frn)
{
	cout << "His heifht: " << frn.height << endl;
}

int main(void)
{
	Boy boy(170);
	Girl girl("010-1234-5678");
	boy.ShowYourFriendInfo(girl);
	girl.ShowYoutFriendInfo(boy);
	return 0;

}
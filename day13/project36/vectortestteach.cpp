#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> v;
	int inkey;
	int sum = 0;

	while (true)
	{
		cout << "정수 한개 입력(0 종료): ";
		cin >> inkey;
		if (!inkey)
		{
			break;
		}
		v.push_back(inkey);
		sum += inkey;
		cout << sum << endl;
		cout << sum / v.size() << endl;
	}

	cout << "프로그램을 종료합니다." << endl;
	
	
	return 0;
}
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
		cout << "���� �Ѱ� �Է�(0 ����): ";
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

	cout << "���α׷��� �����մϴ�." << endl;
	
	
	return 0;
}
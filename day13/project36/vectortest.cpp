#include <iostream>
#include <vector>
using namespace std;

int main()
{
	vector<int> v;
	int i;
	cout << "정수를 입력하세요" << endl;
	while (true)
	{
		cin >> i;
		v.push_back(i);
		if (i == 0)
			break;
	}

	/*
	for (j = 0; j < 5; j++)
	{
		cin >> i;
		v.push_back(i);
		cout << v[i];
	}
	*/
	
	cout << v[i];
	
	return 0;
}
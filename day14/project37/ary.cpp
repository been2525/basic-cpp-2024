//while문과 if문만으로 배열 순서를 바꾸어 저장 출력하시오
#include <iostream>
using namespace std;

int main()
{
	int i=0;
	char ary[] = { 'a','b','c','d','e','f' };
    int n = sizeof(ary) / sizeof(*ary);
    while (i < n / 2) {
        int temp = ary[i];
        ary[i] = ary[n - i - 1];
        ary[n - i - 1] = temp;
        i++;
    }
    int index = 0;
    while (index < sizeof(ary) / sizeof(ary[0])) {
        const char& i = ary[index];
        cout << i << ' ';
        index++;
    }
    return 0;
}

/*
for (const char& i : ary) {
    cout << i << ' ';
}
*/
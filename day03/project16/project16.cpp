// file : project16
// date : 2024-02-23
// desc : NewObject(p.94)

#include <iostream>
#include <string.h>
using namespace std;


class Simple
{
public:
	Simple()		// 생성자(클래스이름과 같은 메서드)
	{
		cout << "I'm simple constructor!" << endl;
	}

};

int main(void)
{
	cout << "case 1: ";
	Simple* sp1 = new Simple;		// new 연산자를 통한 객체생성, 힙영역에 변수를 할당
	//Aaa *ap = new Aaa;
	cout << "case2: ";
	Simple* sp2 = (Simple*)malloc(sizeof(Simple) * 1);		// malloc 함수호출을 통해서 힙영역에 변수를 할당

	cout << endl << "end of main" << endl;
	delete sp1;		// 객체를 반환한다
	free(sp2);
	return 0;
}
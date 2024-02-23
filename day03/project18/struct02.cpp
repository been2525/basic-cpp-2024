/*
c++ 타입의 구조체 : 구조체 멤버로 멤버 변수와 멤버 함수를 가진다
*/
#include <iostream>

typedef struct human {				// human 구조체(여러분이 만든 사용자 정의 자료형)
	char name[20];					// 속성; 멤버변수(name, age, job)
	int age;
	char job[20];
	
	void showHuman()		//기능: 멤버함수
	{
		printf("name : % s age : % d job : % s\n", name, age, job);
	}

}Human;


int main()
{
	int a = 10;
	Human h1 = { "홍길동", 50, "의적" };
	h1.showHuman();

	return 0;
}
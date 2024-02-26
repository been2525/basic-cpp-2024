#include<iostream>
#include"FIledivi02.h"

Human::Human;

void Human::showHuman()		//기능: 멤버함수
{
	char name[20];
	int age;
	char job[20];
	printf("나는 % d살인  % s % s 입니다.\n", age, job, name);//나는 50살인 백수 홍길동입니다.
}
int main()
{
	

	Human h("홍길동", 50, "의적");			// 객체생성방법
	h.showHuman();							//나는 50살인 백수 홍길동입니다.

	return 0;
}
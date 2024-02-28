#include <iostream>
using namespace std;

void Counter()
{
	static int cnt;											// static있으면 한번만 초기화, (죽음과 상관없이)닫는 괄호만나서 죽어도 static으로 선언되있는 변수는 죽지않는다.
	//int cnt = 0;											// 이렇게 실행하면 Current cnt: 1이 10번찍힌다.
	cnt++;
	cout << "Current cnt: " << cnt << endl;
}															// 다돌고 여기로 돌아오면 실행했던내용이 삭제가 된다. 카운터 함수 실행하고 닫는곳으로 내려오면 실행했던 내용 삭제

int main(void)
{
	for (int i = 0; i < 10; i++)
		Counter();
	return 0;
}
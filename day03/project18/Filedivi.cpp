#include<iostream>
# include"Filedivi.h"

AClass::AClass(int anum) {
	num = anum;
}
void AClass::AInfo() {
	std::cout << "AClass::num:" << num << std::endl;
}
int main()
{
	AClass a(10);			// a(10)를 10번째 줄에있는 AClass호출하여서 10을 입력(생성자 호출)
	a.AInfo();

	Human h("홍길동", 50, "의적");			// 객체생성방법
	h.humanInfo();							//나는 50살인 백수 홍길동입니다.


	return 0;
}
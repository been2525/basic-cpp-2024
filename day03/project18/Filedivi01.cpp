// date : 
#include<iostream>


class AClass {
private:							//생략가능 생략해도 private적용됨
	int num;						// 속성에는 public말고 private사용

public:								// 외부에서 접근가능하게 만듬(접근제어지시자)
	AClass(int anum) {				// 생성자 : 초기화 담당
		num = anum;
	}
	void AInfo() {
		std::cout << "A::num:" << num << std::endl;
	}
};
int main()
{
	AClass a(10);			// a(10)를 10번째 줄에있는 AClass호출하여서 10을 입력(생성자 호출)
	a.AInfo();

	return 0;
}
#pragma once
/*
	Filedivi.h 헤더파일: 선언이 와야함, 실행파일이 없어야함
*/
class AClass {
private:							//생략가능 생략해도 private적용됨
	int num;						// 속성에는 public말고 private사용

public:								// 외부에서 접근가능하게 만듬(접근제어지시자)
	AClass(int anum);
	void AInfo();
};
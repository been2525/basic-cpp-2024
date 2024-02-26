#include <iostream>
#include <cstring>
using namespace std;

class StudentClass
{
private:
	int ID;						// const를 써서 학번을 상수화 하면 변경을 못함.
	char name[20];				// 문자열배열을 선언하고 바로 초기화하지 않는 경우는 strcpy()를 통하여 초기화 한다.
	char major[20];
	int age;
public:
	// 문자열은 주소기 때문에 포인트 변수에 넣어서 사용한다. - 문자열의 첫번째 문자 주소가 저장된다.
	// 멤버이니셜라이즈는 객체 생성시 초기화되지않는 멤버들을 초기화할때 사용한다. 즉 객체생성과 상관없이 미리 초기화가 되는 멤버들에 초기화
	StudentClass(int aID,const char *pname,const char *pmajor, int aage) // 뒤에 선언할때 제대로 못함 / : ID(aID) -> 멤버 이니셜라이저를 이용한 멤버초기화(위에 const붙이고)
	{
		ID = aID;
		age = aage;
		strcpy(name, pname);			//strcpy사용하는 법을 몰랐음
		strcpy(major, pmajor);			// 문자열배열을 선언하고 바로 초기화하지 않는 경우는 strcpy()를 통하여 초기화 한다.
	}

	void ShowData() const
	{
		cout << "학번 : " << ID << endl;
		cout << "이름 : " << name << endl;
		cout << "전공 : " << major << endl;
		cout << "나이 : " << age << endl << endl;
	}
};

int main(void)
{
	StudentClass s1(001, "박성빈", "전자공학과", 26);			// 객체를 생성하면 생성자를 호출해야한다.
	s1.ShowData();
	
	return 0;
}
# Basic-cpp-2024
IoT 시스템개발자 심화 프로그래밍 언어 학습리포지토리

## 1일차
- 개발환경 설치
	- Visual Studio 2022 Community 설치
	- C, C++ 소스코드 실행
	- C++에 대해 설명
- C++에서 출력방식
	- std::cout<< '출력대상';
- C++에서 입력방식
	- std::cin>>val;

- 제어문
	1. 선택제어문 
		- if, switch
		- if, else 문(C언어종류) / elif = Python
		- 반복문 For
		- 반복문 While
		- Overloading(재정의)
			- 다른 매개 변수를 가진 같은 이름의 여러 함수를 만들 수 있는 C++의 기능
		- Overriding
		
	2. 반복제어문 
		- for,while
		- for(초기식; 조건식; 증감식){
			1. 초기식을 가지고 조건식을 따진다.
			2. 참이면 for문의 실행문 실행
			3. 증감식을 실행
			4. 조건식을 따지고

		}
```C++
	for (int i = 1; i <= 100; i++) {
		sum = sum + i;
	}
```
	
- 지역변수 = 로컬변수
	- 선언되어진 범위 안에서만 사용이 가능(static 영역에 저장)

- 자료형
	1. 문자 : 문자(char),문자열
	2. 숫자 : 정수(int),실수
	
- 정수로 계산하기


## 2일차
// class 안에 들어 가는 함수 = Method

- Default Value
- Reference 함수
	- 반환형 Reference Type
- Name Space
- 전역,지역변수
- C에서 메모리
	- 스택 : 지역변수, 매개변수
	- HEAP : 사용자에게 할당된 영역
		= Malloc() -> free()반환 = 사용을 할려면 Malloc으로 할당을 받는다
	- data: 함수, 전역변수, 상수, 문자 리터럴
	
	- // A & B = 비트 And 연산자
	- // A && B = 논리 And 연산자 = 논리 곱
		
-------------- clang04_test--------------

## 3일차
- new/delete
	- Malloc & Free -> NEW & DELETE(대신)
	- Malloc() -> free()반환 = 사용을 할려면 Malloc으로 할당을 받는다
	- Malloc()(C++: NEW)으로 할당을 받는다 => FREE(C++: DELETE로 반환)
- 배열 이름은 주소
	- 배열하면 떠오르는건 for문
- C의 라이브러리를 사용하고 싶으면 c를 더하고 .h를 빼면 된다
	- #include<stdio.h>  -> #include<cstdio>
- c++에서 헤드를 선언하는 이유는 하위 버전과의 호환성 때문
- 오버라이딩
- 오버로딩
- c타입의 구조체 : 멤버변수만 가진다.
- c++ 타입의 구조체 : 구조체 멤버로 멤버 변수와 멤버 함수를 가진다
- CAR_CONST::ID_LEN-> 배열의 방의 개수를 의미 
- :: -> 범위 연산자
- public: -> 접근제어지시자
- Class
	- 멤버변수와 멤버함수로 구성된다.
	- 클래스 내부에는 멤버들의 선언으로 작성된다.
	- 멤버함수의 정의를 외부로 빼낸다.(스코프연산자사용)
	-	 일반적으로 멤버변수는 private, 멤버함수 public의 접근제한을 사용한다.

## 4일차
- 객체지향 프로그램
	- 객체지향 프로그래밍은 현실에 존재하는 사물과 대상, 그리고 그에 따른 행동을 있는 그대로 실체화 시키는 형태의 프로그래밍
	- 객체는 하나 이상의 상태 정보(데이터)와 하나 이상의 행동(기능)으로 구성

``` C++
const int mum = 1000; // 상수화 선언할때는 이렇게 사용
```

- 정보은닉
- 캡슐화
- 생성자(클래스 이름과 같은 멤버함수로 출력은 없다.)
	- 클래스의 이름과 함수의 이름이 동일
	- 반환형이 선언되어 있지 않으며, 실제로 반환하지 않는다.
	- 객체 생성시 자동으로 호출되는 멤버함수
	- 모든 클래스는 디폴트 생성자를 가지고 있다.
	- 만약 명시적으로 생성자를 작성하면 디폴트  생성자의 호출은 불가하며 디폴트 생성자가 필요한 경우는 명시적으로 작성한다.
	- 멤버변수들의 초기화를 담당한다.
- 멤버이니셜라이즈
	- 객체 생성전에 선언과 동시에 초기화가 필요한 경우에 사용한다.
	- const 변수와 참조변수의 초기화에 사용

## 5일차
- new 연산자
	- new 연산자를 통해서 heap영역에 int(4byte) 크기만큼 메모리공간을 할당받고 할당받은 메모리 주소를 리턴시켜준다.
- 소멸자
	- 클래스의 이름 앞에 '~'가 붙은 형태의 이름을 갖는다.
- 포인터 배열 : 포인터를 저장하고 있는 배열
- 배열 포인터 : 배열을 가리키는 포인터(배열의 주소를 저장하고 있는 포인터)
- 객체 포인터로 접근할 수 있는 방법은 2가지가 있다.
	- 객체명->멤버
	- 객체명.멤버
	
``` C++
h1->HumanInfo();
h1.HumanInfo();
```
- this 포인터 배열
- 참조자 = 자신이 참조하는 변수를 대신할 수 있는 또 하나의 이름(또 다른 별명)
- 복사생성자: 객체를 복사할때 호출되는 생성자

``` C++
AA(const AA &copy){
	this->a= copy.a;
	this->b= copy.b;
}
```


## 6일차
- 복사 생성자
	- 호출되는 시점
		- 기존에 생성된 객체를 이용해서 새로운 객체를 초기화하는경우
		- Call-by-value 방식의 함수호출 과정에서 객체를 초기화하는 경우
		- 객체를 반환하되, 참조형으로 반환하지 않는 경우
	- 디폴트 복사 생성자
		- 복사 생성자를 정의하지 않으면, 멤버대 멤버의 복사를 진행
	- 얕은 복사 생성자
		- 객체가 가진 멤버들의 값을 새로운 객체로 복사하는데 만약 개체가 참조타입의 멤버를 가지고 있다면 참조값만 복사가 된다.
	- 깊은 복사 생성자
		- 복사한 대상자가 바뀌더라도 복사된 객체는 아무런 영향을 받지 않는다.
		- 얕은 복사와 달리 객체가 가진 모든 멤버를 복사하는 것을 말한다. 객체가 참조 타입의 멤버를 포함할 경우 참조값의 복사가 아닌 참조된 객체 자체가 복사되는 것을 말한다.
- friend 선언
	- friend 선언은 클래스내에 어디든 위치할 수 있다.
	- private 영역에 존재하든, public영역에 존재하든 상관없다.
- static

## 7일차
- static
	- 멤버변수
	- 멤버함수
- 상속을 받아들이는 문법 -> : 클래스
```C++
	class UnivStudent : public Person // 상속을 받아들이는 문법
```
- string타입 : 문자열을 저장할 수 있는 타입
- protected 선언
- 세가지 형태의 상속
	- protected 상속
	- private 상속
	- public 상속

## 8일차
- 다형성
	- 오버로딩(Overloading) : 다중정의
	- 오버라이딩(Overriding) : 재정의, 상속관계에서 사용
	- 상속관계에 있어서 객체포인터는 조심해야한다. 부모타입의 객체 포인터로 자식 객체를 가리키는 경우(다형성) 조심
- 가상함수(Virtual Function)
	- 가상함수의 선언은 virtual 키워드를 통해서 이루어진다.
	- 순수 가상함수를 가지고 있는 클래스를 추상클래스라고 한다.
	- 추상클래스는 객체를 생성할 수 없다.
	- 지금당장은 객체 생성이 필요없는 클래스 = 추상클래스
```C++
virtual void MyFunc() {}
```
- 가상소멸자

## 9일차
- 연산자 오버로딩
- 컴파일러가 기본적으로 제공하는 것은 디폴트와 복사생성자이다.

## 10일차
- 배열의 인덱스
	- 배열이름 ary는 배열의 시작주소이다.
	- 배열선언부에서 배열 인덱스에 있는 숫자는 방의 크기
	- 코드 실행에서 배열 인덱스에 있는 숫자는 방 번호를 나타낸다.
	
```C++
*(ary + 1) = 20; == ary[1] = 20;                // 1번방에다 20을 집어넣어라로 같은 의미이다.
```
- 스마트 포인트
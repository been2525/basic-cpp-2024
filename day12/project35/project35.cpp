// project35.cpp : 이 파일에는 'main' 함수가 포함됩니다. 거기서 프로그램 실행이 시작되고 종료됩니다.
//

#include <iostream>

int main()
{
    std::cout << "Hello World!\n";
}

// 프로그램 실행: <Ctrl+F5> 또는 [디버그] > [디버깅하지 않고 시작] 메뉴
// 프로그램 디버그: <F5> 키 또는 [디버그] > [디버깅 시작] 메뉴

// 시작을 위한 팁: 
//   1. [솔루션 탐색기] 창을 사용하여 파일을 추가/관리합니다.
//   2. [팀 탐색기] 창을 사용하여 소스 제어에 연결합니다.
//   3. [출력] 창을 사용하여 빌드 출력 및 기타 메시지를 확인합니다.
//   4. [오류 목록] 창을 사용하여 오류를 봅니다.
//   5. [프로젝트] > [새 항목 추가]로 이동하여 새 코드 파일을 만들거나, [프로젝트] > [기존 항목 추가]로 이동하여 기존 코드 파일을 프로젝트에 추가합니다.
//   6. 나중에 이 프로젝트를 다시 열려면 [파일] > [열기] > [프로젝트]로 이동하고 .sln 파일을 선택합니다.
/*
#include <iostream>
#include <cstring>
using namespace std;

class Product
{
private:
	char* id;
	int price;
	string producer;
public:
	Product(char* id, int price, char* producer)
	{
		strcpy(this->id, id);
		this->price = price;
		strcpy(this->producer, producer);
	}
};
class Book : public Product
{
private:
	char* author;
	char* title;
	char* ISBM;
public:
	Book(char* author, char* title, char* ISBM)
	{
		strcpy(this->author, author);
	}
};

class HandPhone : public Product
{
private:
	char* model;
	char* RAM;
};

class Computer : public Product
{
private:
	char* model;
	char* cpu;
	char* RAM;
};



int main(void)
{
	Product product[100];
	int productcode;
	int menucode;
	cout << "-----상품관리 프로그램-----" << endl;
	cout << "1 상품추가  2 상품출력   3 상품검색  0 종료" << endl;
	cout << ">  ";
	cin >> menucode;
	if (menucode != 1)
		exit(0);
	else
		printf("1 책 2 핸드폰 3 컴퓨터\n");

	cout << "> ";
	cin >> productcode;

	return 0;
}
*/
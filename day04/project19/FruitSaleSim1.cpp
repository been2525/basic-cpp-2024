#include <iostream>
using namespace std; // cout을 사용하기 위해 선언

class FruitSeller
{
private:		//멤벼변수
	int APPLE_PRICE;
	int numOfApples;
	int myMoney;
public:			// 멤버함수
	void InitMembers(int price, int num, int money) //---> 생성자(기능: 객체를 생성하고 초기화한다.)
	{
		APPLE_PRICE = price; // 필드값들을 초기화 시켜줌
		numOfApples = num;
		myMoney = money;
	}
	int SaleApples(int money)
	{
		int num = money / APPLE_PRICE;			// 판매개수
		numOfApples -= num;						// 남은 사과갯수
		myMoney += money;						// 번돈 ,myMoney = myMoney + money;
		return num;

	}
	void ShowSlaesResult()
	{
		cout << "남은 사과: " << numOfApples << endl;
		cout << "판매 수익: " << myMoney << endl << endl;
	}
};

class FruitBuyer
{
	int myMoney;				// private:
	int numOfApples;			// private:

public:
	void InitMembers(int money)		
	{
		myMoney = money;
		numOfApples = 0;
	}
	void BuyApples(FruitSeller &seller, int money)				 // int& num = n;
	{
		numOfApples += seller.SaleApples(money);				// 다른객체에 있는 값을 불러와서 집어넣음
		myMoney -= money;
	}
	void ShowBuyResult()
	{
		cout << "현재 잔액: " << myMoney << endl;
		cout << "사과 개수: " << numOfApples << endl << endl;
	}
};

int main(void)
{
	FruitSeller seller;						// 저장할 수 있는 공간을 만듬
	seller.InitMembers(1000, 20, 0);
	FruitBuyer buyer;
	buyer.InitMembers(5000);				// 스택영역에 객체 생성
	buyer.BuyApples(seller, 2000);

	cout << "과일 판매자의 현황" << endl;
	seller.ShowSlaesResult();
	cout << "과일 구매자의 현황" << endl;
	buyer.ShowBuyResult();
	return 0;
}
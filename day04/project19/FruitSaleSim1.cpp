#include <iostream>
using namespace std; // cout�� ����ϱ� ���� ����

class FruitSeller
{
private:		//�⺭����
	int APPLE_PRICE;
	int numOfApples;
	int myMoney;
public:			// ����Լ�
	void InitMembers(int price, int num, int money) //---> ������(���: ��ü�� �����ϰ� �ʱ�ȭ�Ѵ�.)
	{
		APPLE_PRICE = price; // �ʵ尪���� �ʱ�ȭ ������
		numOfApples = num;
		myMoney = money;
	}
	int SaleApples(int money)
	{
		int num = money / APPLE_PRICE;			// �ǸŰ���
		numOfApples -= num;						// ���� �������
		myMoney += money;						// ���� ,myMoney = myMoney + money;
		return num;

	}
	void ShowSlaesResult()
	{
		cout << "���� ���: " << numOfApples << endl;
		cout << "�Ǹ� ����: " << myMoney << endl << endl;
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
		numOfApples += seller.SaleApples(money);				// �ٸ���ü�� �ִ� ���� �ҷ��ͼ� �������
		myMoney -= money;
	}
	void ShowBuyResult()
	{
		cout << "���� �ܾ�: " << myMoney << endl;
		cout << "��� ����: " << numOfApples << endl << endl;
	}
};

int main(void)
{
	FruitSeller seller;						// ������ �� �ִ� ������ ����
	seller.InitMembers(1000, 20, 0);
	FruitBuyer buyer;
	buyer.InitMembers(5000);				// ���ÿ����� ��ü ����
	buyer.BuyApples(seller, 2000);

	cout << "���� �Ǹ����� ��Ȳ" << endl;
	seller.ShowSlaesResult();
	cout << "���� �������� ��Ȳ" << endl;
	buyer.ShowBuyResult();
	return 0;
}
/*
 date : 2024-02-23
*/

# include<iostream>
using namespace std;

namespace CAR_CONST
{
	enum // 열거형
	{
		ID_LEN = 20, MAX_SPD = 200, FULL_STEP = 2, ACC_STEP = 10, BRK_STEP = 10
	};
}
struct Car
{
	char gamerID[CAR_CONST::ID_LEN];		// char gameId[5] / CAR_CONST::ID_LEN-> 배열의 방의 개수를 의미 / :: -> 범위 연산자
	int fuelGauge;
	int curSpeed;

	void ShowCarState()
	{
		cout << "소유자ID:" << gamerID << endl;
		cout << "연료량: " << fuelGauge << "%" << endl;
		cout << "현재속도: " << curSpeed << "km/s" << endl << endl;
	}
	void Accle()
	{
		if (fuelGauge <= 0)		//fuelGauge:100, curspeed:0
			return;
		else
			fuelGauge -= CAR_CONST::FULL_STEP;		//fuelGauge:98

		if ((curSpeed + CAR_CONST::ACC_STEP) >= CAR_CONST::MAX_SPD)
		{
			curSpeed = CAR_CONST::MAX_SPD;
			return;
		}

		curSpeed += CAR_CONST::ACC_STEP;
	}
	void Break()
	{
		if (curSpeed < CAR_CONST::BRK_STEP)
		{
			curSpeed = 0;
			return;
		}

		curSpeed -= CAR_CONST::BRK_STEP;
	}
};

int main(void)
{
	Car run99 = { "run99", 100, 0 };
	run99.Accle();		// 98, 10
	run99.Accle();		// 96, 20
	run99.ShowCarState();
	run99.Break();
	run99.ShowCarState();

	Car sped77 = { "sped77", 100, 0 };
	sped77.Accle();
	sped77.Break();
	sped77.ShowCarState();
	return 0;
}
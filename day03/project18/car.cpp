#include<iostream>
#include<cstring>
#include "Car.h"
using namespace std;

void Car::InitMembers(const char* ID, int fuel)		// 필드의 초기화 담당 메서드
{
	strcpy(gamerID, ID);		// 전달된 ID의 문자열을 gamerID에 복사해서 저장
	fuelGauge = fuel;
	curSpeed = 0;
}
void Car::ShowCarState()
{
	cout << "소유자ID:" << gamerID << endl;
	cout << "연료량: " << fuelGauge << "%" << endl;
	cout << "현재속도: " << curSpeed << "km/s" << endl << endl;
}
void Car::Accel()
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
void Car::Break()
{
	if (curSpeed < CAR_CONST::BRK_STEP)
	{
		curSpeed = 0;
		return;
	}

	curSpeed -= CAR_CONST::BRK_STEP;
}

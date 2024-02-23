#include<iostream>
#include<cstring>
#include "Car.h"
using namespace std;

void Car::InitMembers(const char* ID, int fuel)		// �ʵ��� �ʱ�ȭ ��� �޼���
{
	strcpy(gamerID, ID);		// ���޵� ID�� ���ڿ��� gamerID�� �����ؼ� ����
	fuelGauge = fuel;
	curSpeed = 0;
}
void Car::ShowCarState()
{
	cout << "������ID:" << gamerID << endl;
	cout << "���ᷮ: " << fuelGauge << "%" << endl;
	cout << "����ӵ�: " << curSpeed << "km/s" << endl << endl;
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

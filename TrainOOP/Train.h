#pragma once
#include <iostream>
#include <string.h>

#include "Date.h"
#include "Time.h"

using namespace std;

class Train
{
private:
	string departure;
	string destination;
	int trianID;
	int capasity;	//������������ ���-�� ����������
	Date departureDate;
	Time departureTime;
	Date destinationDate;
	Time destinationTime;
public:
	Train();
	Train()
};


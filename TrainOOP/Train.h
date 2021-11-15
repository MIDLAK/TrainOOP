#pragma once
#include <iostream>
#include <string.h>

#include "TrainRoute.h"

using namespace std;

class Train
{
private:
	TrainRoute route;
	int trainID;
	int capacity;	//������������ ���-�� ����������
public:
	Train();
	Train(TrainRoute route, int trainID, int capacity);
	bool setTrainID(int trainID);
	int getTrainID();
	bool setCapacity(int capacity);
	int getCapacity();
	bool setTrainRoute(TrainRoute route);
	TrainRoute getTrainRoute();
	void tutu();

	//���������� ���������
	friend const Train& operator++(Train& train);
	//����������� ���������
	friend const Train operator++(Train& train, int);
private:
	bool isValidCapcity(int capacity);
	bool isValidTrainID(int trainID);
};


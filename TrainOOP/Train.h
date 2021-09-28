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
	int capacity;	//максимальное кол-во пассажиров
public:
	Train();
	Train(TrainRoute route, int trainID, int capacity);
	void setTrainID(int trainID);
	int getTrainID();
	void setCapacity(int capacity);
	int getCapacity();
	void tutu();
private:
	bool isValidCapcity(int capacity);
	bool isValidTrainID(int trainID);
};


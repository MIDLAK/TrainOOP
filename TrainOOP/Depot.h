#pragma once

#include "Train.h"

class Depot
{
private:
	Train** trains;
	int parkingCapacity;

public:
	Depot(int parkingCapacity);
	~Depot();
	void toParkTrain(Train* train);
	Train toLeaveTrain(int trainID);
	void print();
};
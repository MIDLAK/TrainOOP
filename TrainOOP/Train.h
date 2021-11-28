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
	Train(int trainID);
	Train(TrainRoute route, int trainID, int capacity);
	//конструктор копирования
	Train(const Train& train);
	bool setTrainID(int trainID);
	int getTrainID();
	bool setCapacity(int capacity);
	int getCapacity();
	bool setTrainRoute(TrainRoute route);
	TrainRoute getTrainRoute();
	static void tutu();

	//префиксный инкремент
	friend const Train& operator++(Train& train);
	//постфиксный инкремент
	friend const Train operator++(Train& train, int);
	//оператор присваивания
	Train& operator= (const Train* train);
private:
	bool isValidCapcity(int capacity);
	bool isValidTrainID(int trainID);
};


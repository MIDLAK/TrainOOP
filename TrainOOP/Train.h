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
	Train(int trainID);
	Train(TrainRoute route, int trainID, int capacity);
	//����������� �����������
	Train(const Train& train);
	bool setTrainID(int trainID);
	int getTrainID();
	bool setCapacity(int capacity);
	int getCapacity();
	bool setTrainRoute(TrainRoute route);
	TrainRoute getTrainRoute();
	static void tutu();

	//���������� ���������
	friend const Train& operator++(Train& train);
	//����������� ���������
	friend const Train operator++(Train& train, int);
	//�������� ������������
	Train& operator= (const Train* train);
private:
	bool isValidCapcity(int capacity);
	bool isValidTrainID(int trainID);
};


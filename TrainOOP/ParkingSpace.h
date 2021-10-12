#pragma once
#include <iostream>
#include <string.h>

class ParkingSpace
{
private:
	int number;
	double width;	//в метрах
	double length;	//в метрах
	bool isTaken;

public:
	ParkingSpace();
	ParkingSpace(int number, double width, double length);
	bool setNumber(int number);
	int getNumber();
	bool setWidth(int width);
	double getWidth();
	bool setLength(int length);
	double getLength();
	void takeOF();
	void takeON();
	bool getIsTaken();
};
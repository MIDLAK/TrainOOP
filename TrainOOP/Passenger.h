#pragma once
#include <iostream>
#include <string.h>

#include "ParkingSpace.h"

using namespace std;


class Passenger
{
private:
	ParkingSpace* parkingSpace;
	string name;
	string firstName;
	int age;
public:
	Passenger();
	Passenger(string name, string firstName, int age);
	void print();
	bool userInput();
	bool setName(string name);
	string getName();
	bool setFirstName(string firstName);
	string getFirstName();
	bool setAge(int age);
	int getAge();
	bool setParkingSpace(ParkingSpace* parkingSpace);
	ParkingSpace* getParkingSpace();
private:
	bool isValidAge(int age);
	bool isValidName(string name);
	bool isValidFirstName(string firstName);
};


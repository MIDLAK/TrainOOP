#pragma once
#include <iostream>
#include <string.h>

using namespace std;


class Passenger
{
private:
	string name;
	string firstName;
	int age;
public:
	Passenger();
	Passenger(string name, string firstName, int age);
	void print();
	void userInput();
	void setName(string name);
	string getName();
	void setFirstName(string firstName);
	string getFirstName();
	void setAge(int age);
	int getAge();
private:
	bool isValidAge(int age);
	bool isValidName(string name);
	bool isValidFirstName(string firstName);
};


#include "Passenger.h"
#include <iostream>
#include <string.h>

using namespace std;


Passenger::Passenger() {
	name = "-";
	firstName = "-";
	age = 0;
}


Passenger::Passenger(string name, string firstName, int age) {
	if (isValidAge(age) && isValidName(name) && isValidFirstName(firstName)) {
		this->name = name;
		this->firstName = firstName;
		this->age = age;
	}
	else {
		name = "-";
		firstName = "-";
		age = 0;
	}
}


bool Passenger::setName(string name) {
	if (isValidName(name)) {
		this->name = name;
		return true;
	}
	else {
		return false;
	}
}


string Passenger::getName() {
	return name;
}


bool Passenger::setFirstName(string firstName) {
	if (!isValidFirstName(firstName)) {
		this->firstName = firstName;
		return true;
	}
	else {
		return false;
	}
}


string Passenger::getFirstName() {
	return firstName;
}


bool Passenger::setAge(int age) {
	if (isValidAge(age)) {
		this->age = age;
		return true;
	}
	else {
		return false;
	}
}


int Passenger::getAge() {
	return age;
}


bool Passenger::setParkingSpace(ParkingSpace* parkingSpace) {
	if (parkingSpace != NULL) {
		if (!parkingSpace->getIsTaken()) {
			parkingSpace->takeON();
			this->parkingSpace = parkingSpace;
			return true;
		}
	}
	return false;
}


ParkingSpace* Passenger::getParkingSpace() {
	if (parkingSpace != NULL) {
		return parkingSpace;
	}
	else {
		cout << "\nЯ не знаю, что тебе вернуть. Ведь ты не передавал парковочных мест.";
	}
}


bool Passenger::userInput() {
	cout << "\nВведите...";

	cout << "\nИмя: ";
	string name;
	cin >> name;

	cout << "\nФамилию: ";
	string firstName;
	cin >> firstName;

	cout << "\nВозраст: ";

	int age = 0;
	string age_str;
	cin >> age_str;
	if (!atoi(age_str.c_str()))
		throw 123;



	if ((isValidAge(age) && isValidName(name) && isValidFirstName(firstName))) {
		this->name = name;
		this->firstName = firstName;
		this->age = age;
		return true;
	}
	else {
		return false;
	}
}


void Passenger::print() {
	cout << "\nИмя: " + name + "\nФамилия: " + firstName + "\nВозраст: " << age;
}


bool Passenger::isValidAge(int age) {
	return (age > 0) ? true : false;
}


bool Passenger::isValidName(string name) {
	return (name.length() > 0) ? true : false;
}


bool Passenger::isValidFirstName(string firstName) {
	return (firstName.length() > 0) ? true : false;
}
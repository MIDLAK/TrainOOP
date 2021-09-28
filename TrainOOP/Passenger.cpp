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


void Passenger::setName(string name) {
	if (isValidName(name))
		this->name = name;
}


string Passenger::getName() {
	return name;
}


void Passenger::setFirstName(string firstName) {
	if (isValidFirstName(firstName))
		this->firstName = firstName;
}


string Passenger::getFirstName() {
	return firstName;
}


void Passenger::setAge(int age) {
	if (isValidAge(age))
		this->age = age;
}


int Passenger::getAge() {
	return age;
}


void Passenger::userInput() {
	cout << "\nВведите...";

	cout << "\nИмя: ";
	string name;
	cin >> name;

	cout << "\nФамилию: ";
	string firstName;
	cin >> firstName;

	cout << "\nВозраст: ";
	int age = 0;
	cin >> age;

	if ((isValidAge(age) && isValidName(name) && isValidFirstName(firstName))) {
		this->name = name;
		this->firstName = firstName;
		this->age = age;
	}
	else {
		cout << "\nВНИМАНИЕ! Ошибка при вводе данных пассажира!";
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
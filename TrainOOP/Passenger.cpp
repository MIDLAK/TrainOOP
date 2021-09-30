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
	if (isValidFirstName(firstName)) {
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


void Passenger::userInput() {
	cout << "\nÂâåäèòå...";

	cout << "\nÈìÿ: ";
	string name;
	cin >> name;

	cout << "\nÔàìèëèş: ";
	string firstName;
	cin >> firstName;

	cout << "\nÂîçğàñò: ";
	int age = 0;
	cin >> age;

	if ((isValidAge(age) && isValidName(name) && isValidFirstName(firstName))) {
		this->name = name;
		this->firstName = firstName;
		this->age = age;
	}
	else {
		cout << "\nÂÍÈÌÀÍÈÅ! Îøèáêà ïğè ââîäå äàííûõ ïàññàæèğà!";
	}
}


void Passenger::print() {
	cout << "\nÈìÿ: " + name + "\nÔàìèëèÿ: " + firstName + "\nÂîçğàñò: " << age;
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
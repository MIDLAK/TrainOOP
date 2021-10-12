#include <iostream>
#include <string.h>

#include "ParkingSpace.h"

#include <iostream>
#include <string.h>

#include "ParkingSpace.h"


ParkingSpace::ParkingSpace() {
	ParkingSpace(1, 2.5, 5.3);
}


ParkingSpace::ParkingSpace(int number, double width, double length) {
	if (number > 0 && width > 0 && length > 0) {
		this->number = number;
		this->width = width;
		this->length = length;
		isTaken = false;
	}
	else {
		ParkingSpace();
	}
}


bool ParkingSpace::setLength(int length) {
	if (length > 0) {
		this->length = length;
		return true;
	}
	else {
		return false;
	}
}


double ParkingSpace::getLength() {
	return length;
}


bool ParkingSpace::setWidth(int width) {
	if (width > 0) {
		this->width = width;
		return true;
	}
	else {
		return false;
	}
}


double ParkingSpace::getWidth() {
	return width;
}


bool ParkingSpace::setNumber(int number) {
	if (number > 0) {
		this->number = number;
		return true;
	}
	else {
		return false;
	}
}


int ParkingSpace::getNumber() {
	return number;
}


//Освободить место
void ParkingSpace::takeOF() {
	isTaken = false;
}


//Занять место
void ParkingSpace::takeON() {
	isTaken = true;
}


bool ParkingSpace::getIsTaken() {
	return isTaken;
}
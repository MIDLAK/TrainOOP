#include "Train.h"

#include <iostream>
#include <string.h>

using namespace std;


Train::Train() {
	route = TrainRoute();
	trainID = 0;
	capacity = 0;
}


Train::Train(TrainRoute route, int trainID, int capacity) {
	if (isValidCapcity(capacity), isValidTrainID(trainID)) {
		this->route = route;
		this->trainID = trainID;
		this->capacity = capacity;
	}
	else {
		route = TrainRoute();
		trainID = 0;
		capacity = 0;
	}
}


bool Train::setTrainRoute(TrainRoute route) {
	this->route = route;
	return true;
}


TrainRoute Train::getTrainRoute() {
	return this->route;
}


bool Train::setTrainID(int trainID) {
	if (isValidTrainID(trainID)) {
		this->trainID = trainID;
		return true;
	}
	else {
		return false;
	}
}


int Train::getTrainID() {
	return trainID;
}


bool Train::setCapacity(int capacity) {
	if (isValidCapcity(capacity)) {
		this->capacity = capacity;
		return true;
	}
	else {
		return false;
	}
}


int Train::getCapacity() {
	return capacity;
}


bool Train::isValidCapcity(int capacity) {
	return (capacity > 0) ? true : false;
}


bool Train::isValidTrainID(int trainID) {
	return (trainID > 0) ? true : false;
}
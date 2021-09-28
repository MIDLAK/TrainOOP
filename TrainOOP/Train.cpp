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


void Train::setTrainID(int trainID) {
	if (isValidTrainID(trainID)) {
		this->trainID = trainID;
	}
}


int Train::getTrainID() {
	return trainID;
}


void Train::setCapacity(int capacity) {
	if (isValidCapcity(capacity)) {
		this->capacity = capacity;
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
#include "Train.h"

#include <iostream>
#include <string.h>

using namespace std;


Train::Train() {
	route = TrainRoute();
	trainID = 0;
	capacity = 0;
}

Train::Train(int trainID) : Train(TrainRoute(), trainID, 1) {}

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

//конструктор копирования
Train::Train(const Train& otherTrain) : trainID(otherTrain.trainID), capacity(otherTrain.capacity), route(otherTrain.route) {}

//префиксная версия добавляет одно место
const Train& operator++(Train& train) {
	train.capacity++;
	return train;
}

//постфиксная версия добавляет вагон к поезду
const Train operator++(Train& train, int) {
	train.capacity += 100; //добавляем вагон к поезду	
	return train;
}

//оператор присваивания
Train& Train::operator= (const Train* train) {
	route = train->route;
	trainID = train->trainID;
	capacity = train->capacity;
	return *this;
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

void Train::tutu() {
	cout << "ТУУУ-ТУУУ";
}
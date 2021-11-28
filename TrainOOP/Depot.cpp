#include <iostream>
#include <string.h>

#include "Depot.h"

Depot::Depot(int parkingCapacity) {
	this->trains = new Train*[parkingCapacity]();
	this->parkingCapacity = parkingCapacity;
}

Depot::~Depot(){}

void Depot::toParkTrain(Train* train) {
	if (train != NULL) {
		bool b = true;
		for (int i = 0; i < parkingCapacity; i++) {
			if (trains[i] != NULL && trains[i]->getTrainID() == train->getTrainID()) {
				b = false;
			}
		}

		for (int i = 0; i < parkingCapacity; i++) {
			if (trains[i] == NULL && b) {
				trains[i] = new Train(train->getTrainRoute(), train->getTrainID(), train->getCapacity());	//инициализация ячеек
				//train[i] = train;
				break;
			}
		}

		if (!b) {
			throw new exception("ОШИБКА! Парковка поезда с номером %d не удалась.", train->getTrainID());
		}
	}
}

Train Depot::toLeaveTrain(int trainID) {
	for (int i = 0; i < parkingCapacity; i++) {
		if (trains[i]->getTrainID() == trainID) {
			Train copy(**(trains + i));	//копирование объекта перед удалением из массива
			trains[i] = NULL;
			return copy;
		}
	}
}

void Depot::print() {
	cout << "\nВсе поезда, находящиеся в данный момент в депо:\n";
	for (int i = 0; i < parkingCapacity; i++) {
		cout << "Поезд № " << trains[i]->getTrainID() << '\n';
	}
}


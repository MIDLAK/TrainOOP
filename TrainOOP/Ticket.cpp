#include "Ticket.h"

#include "Train.h"

#include <iostream>
#include <string.h>

using namespace std;

Ticket::Ticket() {
	price = 0;
	seat = 0;
	passenger = Passenger();
	train = Train();
}


Ticket::Ticket(int price, int seat, Passenger passenger, Train train) {
	if (isValidPrice(price) && isValidSeat(seat)) {
		this->price = price;
		this->seat = seat;
		this->passenger = passenger;
		this->train = train;
	}
	else {
		this->price = price;
		this->seat = seat;
		this->passenger = Passenger();
		this->train = Train();
	}
}


void Ticket::print() {
	cout << "\n-------------*Билет*-------------";
	passenger.print();
	cout << "\nНомер поезда: " << train.getTrainID();
	cout << "\nМесто: " << seat;
	cout << "\nМесто отправления: " << train.getTrainRoute().getDeparture();
	cout << "\nМесто прибытия: " << train.getTrainRoute().getDestination();
	cout << "\nДата и время отправления: ";
	train.getTrainRoute().getDepartureDate().print();
	train.getTrainRoute().getDepartureTime().print();
	cout << "\nДата и время прибытия: ";
	train.getTrainRoute().getDestinationDate().print();
	train.getTrainRoute().getDestinationTime().print();
	cout << "\nЦена: " << price;
	cout << "\n---------------------------------";
}


bool Ticket::setPrice(int price) {
	if (isValidPrice(price)) {
		this->price = price;
		return true;
	}
	else {
		return false;
	}
}


int Ticket::getPrice() {
	return price;
}


bool Ticket::setSeat(int seat) {
	if (isValidSeat(seat)) {
		this->seat = seat;
		return true;
	}
	else {
		return false;
	}
}


bool Ticket::setPassenger(Passenger passenger) {
	this->passenger = passenger;
	return true;
}


Passenger Ticket::getPassenger() {
	return passenger;
}


bool Ticket::setTrain(Train train) {
	this->train = train;
	return true;
}


Train Ticket::getTrain() {
	return train;
}


bool Ticket::isValidPrice(int price) {
	return (price >= 0) ? true : false;
}


bool Ticket::isValidSeat(int seat) {
	return (seat >= 0) ? true : false;
}

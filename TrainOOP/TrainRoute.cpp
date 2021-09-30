#include "TrainRoute.h"

TrainRoute::TrainRoute() {
	departure = "-";
	destination = "-";
	departureDate = Date();
	departureTime = Time();
	destinationDate = Date();
	destinationTime = Time();
}


TrainRoute::TrainRoute(string departure, string destination, Date departureDate, Time departureTime, Date destinationDate, Time destinationTime) {
	if (isValidDeparture(departure) && isValidDestination(destination)) {
		this->departure = departure;
		this->destination = destination;
		this->departureDate = departureDate;
		this->departureTime = departureTime;
		this->destinationDate = destinationDate;
		this->destinationTime = destinationTime;
	}
	else {
		this->departure = "-";
		this->destination = "-";
		this->departureDate = Date();
		this->departureTime = Time();
		this->destinationDate = Date();
		this->destinationTime = Time();
	}
}


void TrainRoute::setDeparture(string departure) {
	if (isValidDeparture(departure)) {
		this->departure = departure;
	}
}


string TrainRoute::getDeparture() {
	return departure;
}


void TrainRoute::setDestination(string destination) {
	if (isValidDestination(destination)) {
		this->destination = destination;
	}
}


string TrainRoute::getDestination() {
	return destination;
}


void TrainRoute::setDepartureDate(Date departureDate) {
	this->departureDate = departureDate;
}


Date TrainRoute::getDepartureDate() {
	return departureDate;
}


void TrainRoute::setDepartureTime(Time departureTime) {
	this->departureTime = departureTime;
}


Time TrainRoute::getDepartureTime() {
	return departureTime;
}


void TrainRoute::setDestinationDate(Date destinationDate) {
	this->destinationDate = destinationDate;
}


Date TrainRoute::getDestinationDate() {
	return destinationDate;
}


void TrainRoute::setDestinationTime(Time destinationTime) {
	this->destinationTime = destinationTime;
}


Time TrainRoute::getDestinationTime() {
	return destinationTime;
}


bool TrainRoute::isValidDeparture(string departure) {
	return (departure.length() > 0) ? true : false;
}


bool TrainRoute::isValidDestination(string destination) {
	return (destination.length() > 0) ? true : false;
}


/*TODO: Написать реализацию*/
void TrainRoute::travelTime() {
	cout << "\nВремя в пути: ";
}
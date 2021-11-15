#pragma once

#include <iostream>
#include <string.h>

#include "Date.h"
#include "Time.h"

using namespace std;

class TrainRoute
{
private:
	string departure;
	string destination;
	Date departureDate;
	Time departureTime;
	Date destinationDate;
	Time destinationTime;
public:
	TrainRoute();
	TrainRoute(string departure, string destination, Date departureDate, Time departureTime, Date destinationDate, Time destinationTime);
	bool setDeparture(string departure);
	string getDeparture();
	bool setDestination(string destination);
	string getDestination();
	bool setDepartureDate(Date departureDate);
	Date getDepartureDate();
	bool setDestinationDate(Date destinationDate);
	Date getDestinationDate();
	bool setDepartureTime(Time departureTime);
	Time getDepartureTime();
	bool setDestinationTime(Time destinationTime);
	Time getDestinationTime();

	friend const TrainRoute operator+(const TrainRoute& left, const TrainRoute& right);
private:
	bool isValidDeparture(string departure);
	bool isValidDestination(string destination);
	void travelTime();
};
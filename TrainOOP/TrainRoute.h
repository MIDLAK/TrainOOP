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
	void setDeparture(string departure);
	string getDeparture();
	void setDestination(string destination);
	string getDestination();
	void setDepartureDate(Date departureDate);
	Date getDepartureDate();
	void setDestinationDate(Date destinationDate);
	Date getDestinationDate();
	void setDepartureTime(Time departureTime);
	Time getDepartureTime();
	void setDestinationTime(Time destinationTime);
	Time getDestinationTime();
private:
	bool isValidDeparture(string departure);
	bool isValidDestination(string destination);
	void travelTime();
};
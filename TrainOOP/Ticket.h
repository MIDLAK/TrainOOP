#pragma once
#include "Passenger.h"
#include "Train.h"

class Ticket
{
private:
	int price;
	int seat;
	Passenger passenger;
	Train train;
public:
	Ticket();
	Ticket(int price, int seat, Passenger passenger, Train train);
	bool setPrice(int price);
	int getPrice();
	bool setSeat(int seat);
	int getSeat();
	bool setPassenger(Passenger passenger);
	Passenger getPassenger();
	bool setTrain(Train train);
	Train getTrain();
	void print();
private:
	bool isValidPrice(int price);
	bool isValidSeat(int seat);
};


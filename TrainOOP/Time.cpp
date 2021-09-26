#include "Time.h"

#include <iostream>
using namespace std;

Time::Time() {
	hour = 0;
	minute = 0;
}


/*TODO: почему-то не присваивает*/
Time::Time(int hour, int minute) {
	if (isValidTime()) {
		this->hour = hour;
		this->minute = minute;
	}
	else {
		hour = 0;
		minute = 0;
	}
}


int Time::getHour() {
	return hour;
}


void Time::setHour(int hour) {
	if (isValidHour(hour)) {
		this->hour = hour;
	}
}


int Time::getMinute() {
	return hour;
}


void Time::setMinute(int minute) {
	if (isValidMinute(minute)) {
		this->minute = minute;
	}
}


void Time::print() {
	cout <<"\nВремя отправления: ";

	if (hour < 10 && minute < 10)
		printf("0%d:0%d", hour, minute);

	else if (hour < 10 && minute >= 10)
		printf("0%d:%d", hour, minute);

	else if (hour >= 10 && minute < 10)
		printf("%d:0%d", hour, minute);

	else if (hour >= 10 && minute >= 10)
		printf("%d:%d", hour, minute);
}


/*TODO: нужно дописать*/
void Time::userInput() {
	int hour;
	int minute;
	string input;

	cout << "Время отправления (ЧЧ:ММ)";
	cin >> input;

	for (int i = 0; i < input.length(); i++) {
		if (isdigit(input[i])) {

		}
	}



}


bool Time::isValidTime() {
	if (isValidHour(hour) && isValidMinute(minute))
		return true;
	else
		return false;
}


bool Time::isValidHour(int hour) {
	return (hour <= 23 && hour >= 0) ? true : false;
}


bool Time::isValidMinute(int minute) {
	return (minute <= 59 && minute >= 0) ? true : false;
}
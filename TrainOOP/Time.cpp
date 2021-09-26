#include "Time.h"

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

Time::Time() {
	hour = 0;
	minute = 0;
}


/*TODO: почему-то не присваивает*/
Time::Time(int hour, int minute) {
	if (isValidHour(hour) && isValidMinute(minute)) {
		this->hour = hour;
		this->minute = minute;
	}
	else {
		this->hour = 0;
		this->minute = 0;
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
	int hour = 0;
	int minute = 0;
	string input;

	cout << "\nВремя отправления (ЧЧ:ММ)\n";
	cin >> input;

	char* word = strtok(new char[input.length()], ":");	//разбили строку input на слова по ":"

	int inputOnlyNumbers = 0;
	while (word != NULL) {
		cout << word << "n";
		word = strtok(NULL, ":");
	}


}


bool Time::isValidHour(int hour) {
	return (hour <= 23 && hour >= 0) ? true : false;
}


bool Time::isValidMinute(int minute) {
	return (minute <= 59 && minute >= 0) ? true : false;
}
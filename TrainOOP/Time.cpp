#include "Time.h"

#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

Time::Time() {
	hour = 0;
	minute = 0;
}


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


bool Time::setHour(int hour) {
	if (isValidHour(hour)) {
		this->hour = hour;
		return true;
	}
	else {
		return false;
	}
}


int Time::getMinute() {
	return hour;
}


bool Time::setMinute(int minute) {
	if (isValidMinute(minute)) {
		this->minute = minute;
		return true;
	}
	else {
		return false;
	}
}


void Time::print() {
	cout <<"\n";

	if (hour < 10 && minute < 10)
		printf("0%d:0%d", hour, minute);

	else if (hour < 10 && minute >= 10)
		printf("0%d:%d", hour, minute);

	else if (hour >= 10 && minute < 10)
		printf("%d:0%d", hour, minute);

	else if (hour >= 10 && minute >= 10)
		printf("%d:%d", hour, minute);
}


bool Time::userInput() {
	int hour = 0;
	int minute = 0;
	string input;

	cout << "\nВремя отправления (ЧЧ:ММ)\n";
	cin >> input;

	char* p = _strdup(input.c_str());
	char* word = strtok(/*new char[input.length()+1]*/p, ":");	//разбили строку input на слова по ":"


	/*весь этот кусок нужен для того, чтобы вычленить первые две цифры, разделённые двоеточием из введённой строки, и проверить их*/
	int hourOrMinute = 0;
	while (word != NULL && hourOrMinute < 2){
		if (isNumber(word)) {
			int wordInNumber = atoi(word);
			if (isValidMinute(wordInNumber) && hourOrMinute == 1) {
				minute = wordInNumber;
				hourOrMinute++;
			}
			if (isValidHour(wordInNumber) && hourOrMinute == 0) {
				hour = wordInNumber;
				hourOrMinute++;
			}
			if (hourOrMinute == 2) {
				this->hour = hour;
				this->minute = minute;
				return true;
			}
		}
		else {
			return false;
			break;
		}


		word = strtok(NULL, ":");
	}
	return false;	//если каким-то образом while не начнёт работу

}


bool Time::isNumber(char* word) {
	bool rez = true;
	for (int i = 0, len = strlen(word); i < len; i++) {
		if (isdigit(*(word + 1)) == 0) {
			rez = false;
			break;
		}
	}
	return rez;
}


bool Time::isValidHour(int hour) {
	return (hour <= 23 && hour >= 0) ? true : false;
}


bool Time::isValidMinute(int minute) {
	return (minute <= 59 && minute >= 0) ? true : false;
}
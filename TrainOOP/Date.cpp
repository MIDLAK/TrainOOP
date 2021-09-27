#include "Date.h"
#include <iostream>
using namespace std;


Date::Date() {
	day = 0;
	month = 0;
	year = 0;
}


Date::Date(int day, int month, int year) {
	if (isValidDate(day, month, year)) {
		this->day = day;
		this->month = month;
		this->year = year;
	}
	else {
		this->day = 0;
		this->month = 0;
		this->year = 0;
	}
}


int Date::getDay() {
	return day;
}


int Date::getMonth() {
	return month;
}


int Date::getYear() {
	return year;
}


void Date::print() {
	printf("\nƒата отправлени€: ");
	if (day >= 10 && month >= 10)
		printf("%d.%d", day, month);

	else if (day < 10 && month >= 10)
		printf("0%d.%d", day, month);

	else if (day >= 10 && month < 10)
		printf("%d.0%d", day, month);

	else if (day < 10 && month < 10)
		printf("0%d.0%d", day, month);

	printf(".%d", year);
}


bool Date::isValidDate(int day, int month, int year) {
	if (year > 0 && day > 0 && month > 0) {
		switch (month)
		{
			//€нварь
		case 1:
			return (day <= 31) ? true : false;

			//февраль
		case 2:
			return (day <= 28) ? true : false;

			//март
		case 3:
			return (day <= 31) ? true : false;

			//апрель
		case 4:
			return (day <= 30) ? true : false;

			//май
		case 5:
			return (day <= 31) ? true : false;

			//июнь
		case 6:
			return (day <= 30) ? true : false;

			//июль
		case 7:
			return (day <= 31) ? true : false;

			//август
		case 8:
			return (day <= 31) ? true : false;

			//сент€брь
		case 9:
			return (day <= 30) ? true : false;

			//окт€брь
		case 10:
			return (day <= 31) ? true : false;

			//но€брь
		case 11:
			return (day <= 30) ? true : false;

			//декабрь
		case 12:
			return (day <= 31) ? true : false;

		default:
			return false;
		}
	}
	else {
		return false;
	}
}

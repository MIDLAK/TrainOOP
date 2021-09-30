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


void Date::setDay(int day) {
	if (isValidDate(day, this->month, this->year));
		this->day = day;
}


int Date::getMonth() {
	return month;
}


void Date::setMonth(int month) {
	if (isValidDate(this->day, month, this->year));
		this->month = month;
}


int Date::getYear() {
	return year;
}


void Date::setYear(int year) {
	if (isValidDate(this->day, this->month, this->year));
}


void Date::userIput() {
	cout << "\n¬ведите...";
	cout << "\nƒень: ";
	int day = 0;
	cin >> day;

	cout << "ћес€ц: ";
	int month = 0;
	cin >> month;

	cout << "√од: ";
	int year = 0;
	cin >> year;

	if (isValidDate(day, month, year)) {
		this->day = day;
		this->month = month;
		this->year = year;
	}
	else {
		cout << "\n¬ведена некорректна€ дата (или сегодн€ 29 феврал€, а € ещЄ об этом не позаботилс€)";
	}
}


void Date::print() {
	printf("\n");
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

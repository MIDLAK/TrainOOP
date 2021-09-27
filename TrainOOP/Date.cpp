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
	printf("\n���� �����������: ");
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
			//������
		case 1:
			return (day <= 31) ? true : false;

			//�������
		case 2:
			return (day <= 28) ? true : false;

			//����
		case 3:
			return (day <= 31) ? true : false;

			//������
		case 4:
			return (day <= 30) ? true : false;

			//���
		case 5:
			return (day <= 31) ? true : false;

			//����
		case 6:
			return (day <= 30) ? true : false;

			//����
		case 7:
			return (day <= 31) ? true : false;

			//������
		case 8:
			return (day <= 31) ? true : false;

			//��������
		case 9:
			return (day <= 30) ? true : false;

			//�������
		case 10:
			return (day <= 31) ? true : false;

			//������
		case 11:
			return (day <= 30) ? true : false;

			//�������
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

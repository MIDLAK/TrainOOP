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
	cout << "\n�������...";
	cout << "\n����: ";
	int day = 0;
	cin >> day;

	cout << "�����: ";
	int month = 0;
	cin >> month;

	cout << "���: ";
	int year = 0;
	cin >> year;

	if (isValidDate(day, month, year)) {
		this->day = day;
		this->month = month;
		this->year = year;
	}
	else {
		cout << "\n������� ������������ ���� (��� ������� 29 �������, � � ��� �� ���� �� �����������)";
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

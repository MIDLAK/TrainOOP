#pragma once
class Date
{
private:
	int day;
	int month;
	int year;
public:
	Date();
	Date(int day, int month, int year);
	int getDay();
	bool setDay(int day);
	int getMonth();
	bool setMonth(int month);
	int getYear();
	bool setYear(int year);
	void print();
	bool userIput();
private:
	bool isValidDate(int day, int month, int year);
};


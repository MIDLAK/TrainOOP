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
	int getMonth();
	int getYear();
	void print();
	void userIput();
private:
	bool isValidDate(int day, int month, int year);
};


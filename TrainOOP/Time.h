#pragma once

class Time
{
private:
	int hour;
	int minute;

public:
	Time();
	Time(int hour, int minute);
	int getHour();
	bool setHour(int hour);
	int getMinute();
	bool setMinute(int minute);
	void print();
	bool userInput();

private:
	bool isNumber(char* word);
	bool isValidHour(int hour);
	bool isValidMinute(int minute);
};


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
	void setHour(int hour);
	int getMinute();
	void setMinute(int minute);
	void print();
	void userInput();

private:
	bool isValidHour(int hour);
	bool isValidMinute(int minute);
};


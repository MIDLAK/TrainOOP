#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
#include <stdio.h>
#include <locale.h>
#include <Windows.h>
#include <conio.h>


#include "Main.h"
#include "Time.h"
#include "Date.h"
#include "Passenger.h"
#include "TrainRoute.h"
#include "Train.h"
#include <iostream>


int main() {
	setlocale(LC_ALL, "Rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Time time = Time(55, 22);
	time.print();
	time.userInput();

	Date date = Date(27, 9, 2021);
	date.print();
	date.userIput();
	date.print();
	
	Passenger pas = Passenger("Вадим", "Калуга", 19);
	pas.print();
	pas.userInput();
	pas.print();

	Date d1 = Date(28, 9, 2021);
	Time t1 = Time(21, 48);
	Date d2 = Date(1, 10, 2021);
	Time t2 = Time(6, 55);
	TrainRoute rt = TrainRoute("Барнаул", "Омск", d1, t1, d2, t2);
	
	Train tr = Train(rt, 654, 200);
	

}

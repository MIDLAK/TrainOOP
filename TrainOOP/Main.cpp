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
#include "Ticket.h"
#include <iostream>


int main() {
	setlocale(LC_ALL, "Rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Time time = Time(22, 55);
	time.print();
	bool isTime = time.userInput();
	if (isTime) {
		cout << "\nВремя введено верно. Это очень здорово.";
	}
	else {
		cout << "\nВремя введено неверно. Это очень плохо.";
	}
	time.print();

	Date date = Date(27, 9, 2021);
	date.print();
	bool isDate = date.userIput();
	if (!isDate) {
		cout << "\nВведена некорректная дата (или сегодня 29 февраля, а я ещё об этом не позаботился)";
	}
	date.print();
	
	Passenger pas = Passenger("Вадим", "Калуга", 19);
	pas.print();
	bool isPassenger = pas.userInput();
	if (!isPassenger) {
		cout << "\nВНИМАНИЕ! Ошибка при вводе данных пассажира!";
	}
	pas.print();

	Date d1 = Date(28, 9, 2021);
	Time t1 = Time(21, 48);
	Date d2 = Date(1, 10, 2021);
	Time t2 = Time(6, 55);
	TrainRoute rt = TrainRoute("Барнаул", "Омск", d1, t1, d2, t2);
	
	Train tr = Train(rt, 654, 200);

	Ticket tk = Ticket(500, 125, pas, tr);
	tk.print();
}

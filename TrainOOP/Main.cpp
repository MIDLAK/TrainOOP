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
#include "ParkingSpace.h"
#include "TrainRoute.h"
#include "Train.h"
#include "Ticket.h"
#include "Depot.h"
#include <iostream>


int main() {
	setlocale(LC_ALL, "Rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	Train::tutu();

	ParkingSpace* ps = new ParkingSpace();

	Passenger pas = Passenger("Вадим", "Калуга", 19);

	pas.setParkingSpace(ps);

	Date d1 = Date(28, 9, 2021);
	Time t1 = Time(21, 48);
	Date d2 = Date(1, 10, 2021);
	Time t2 = Time(6, 55);
	TrainRoute rt1 = TrainRoute("Барнаул", "Омск", d1, t1, d2, t2);

	Date d3 = Date(30, 9, 2021);
	Time t3 = Time(20, 44);
	Date d4 = Date(7, 10, 2021);
	Time t4 = Time(6, 55);
	TrainRoute rt2 = TrainRoute("Омск", "Москва", d3, t3, d4, t4);
	
	cout << "\n----------*Демонстрация конструкторов*----------\n";
	Train train501 = Train(501);
	cout << "Поезд cтатический train501: " << train501.getTrainID();
	cout << "\n------------------------------------------------\n";
	Train* train601 = new Train(601);
	cout << "Поезд динамический train601: " << train601->getTrainID();
	cout << "\n------------------------------------------------\n";
	Train* train701 = train601;
	train701->setTrainID(801);
	cout << "Поезд train601 после изменения train701, который ссылается на тот же объект: " << train601->getTrainID();
	cout << "\n------------------------------------------------\n";


	Train *train1 = new Train(56);
	Train *train2 = new Train(77);
	Train *train3 = new Train(81);

	Depot depot = Depot(3);
	depot.toParkTrain(train1);
	depot.toParkTrain(train2);
	depot.toParkTrain(train3);

	depot.print();



	Train tr = Train(rt1+rt2, 654, 200);
	cout << "\nДО постинкремента " << tr.getCapacity();
	tr++;
	cout << "\nПОСЛЕ постинкремента " << tr.getCapacity();

	++tr;
	cout << "\nПРЕДинкремент " << tr.getCapacity();


	Ticket tk = Ticket(500, 125, pas, tr);
	tk.print();

	int numberOfTrains;
	cout << "\nКоличество поездов для ДИНАМИЧЕСКОГО массива: ";
	cin >> numberOfTrains;
	Train* trainArrayPtr = new Train[numberOfTrains];
	for (int i = 0; i < numberOfTrains; i++) {
		(trainArrayPtr + i)->setTrainID(i+1);
		cout << "\n Поезд номер :" << (trainArrayPtr+i)->getTrainID();
	}
}

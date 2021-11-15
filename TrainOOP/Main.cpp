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
#include <iostream>


int main() {
	setlocale(LC_ALL, "Rus");
	SetConsoleCP(1251);
	SetConsoleOutputCP(1251);

	ParkingSpace* ps = new ParkingSpace();

	Passenger pas = Passenger("�����", "������", 19);

	pas.setParkingSpace(ps);

	Date d1 = Date(28, 9, 2021);
	Time t1 = Time(21, 48);
	Date d2 = Date(1, 10, 2021);
	Time t2 = Time(6, 55);
	TrainRoute rt1 = TrainRoute("�������", "����", d1, t1, d2, t2);

	Date d3 = Date(30, 9, 2021);
	Time t3 = Time(20, 44);
	Date d4 = Date(7, 10, 2021);
	Time t4 = Time(6, 55);
	TrainRoute rt2 = TrainRoute("����", "������", d3, t3, d4, t4);
	

	Train tr = Train(rt1+rt2, 654, 200);
	cout << "\n�� �������������� " << tr.getCapacity();
	tr++;
	cout << "\n����� �������������� " << tr.getCapacity();

	++tr;
	cout << "\n������������� " << tr.getCapacity();


	Ticket tk = Ticket(500, 125, pas, tr);
	tk.print();

	int numberOfTrains;
	cout << "\n���������� ������� ��� ������������� �������: ";
	cin >> numberOfTrains;
	Train* trainArrayPtr = new Train[numberOfTrains];
	for (int i = 0; i < numberOfTrains; i++) {
		(trainArrayPtr + i)->setTrainID(i+1);
		cout << "\n ����� ����� :" << (trainArrayPtr+i)->getTrainID();
	}
}

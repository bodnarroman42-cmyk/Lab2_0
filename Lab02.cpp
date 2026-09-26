// Lab_02.cpp
// < Боднар Роман >
// Лабораторна робота № 2.
// Лінійні програми.
// Варіант 0.2
#include <iostream>
#include <cmath>
#include <iomanip>
using namespace std;
int main()
{
	double Pi = 4 * atan(1.); // число пі
	double x; // вхідний параметр
	double z1; // результат обчислення 1-го виразу
	double z2; // результат обчислення 2-го виразу
	cout << "x = "; cin >> x;
	z1 = 1. / 2 * (sin(Pi) + cos(Pi)) * x;
	z2 = -x / 2;
	cout << endl;
	cout << fixed << setprecision(3);
	cout << "z1 = " << z1 << endl;
	cout << "z2 = " << z2 << endl;
	cin.get();
	return 0;
}
// Lab_02.cpp
// Козубенко Андрій
// Лабораторна робота № 2.
// Лінійні програми.
// Варіант 10

#include <iostream>
#include <cmath>

using std::cout;
using std::cin;
using std::endl;

int main()
{
	double Pi = 4 * atan(1.0); // число пі
	double a; // вхідний параметр
	double z1; // результат обчислення першого виразу
	double z2; // результат обчислення другого виразу

	cout << " a = ";
	cin >> a;

	z1 = sin(Pi / 2.0 + 3.0 * a) / (1.0 - sin(3.0 * a - Pi));
	z2 = 1 / tan(5.0 / 4.0 * Pi + 3.0 / 2.0 * a);

	cout << endl;
	cout << " z1 = " << z1 << endl;
	cout << " z2 = " << z2 << endl;

	cin.get(); 
	/* 
	організація затримки до натискання клавіші,
	щоб тестувати в debug mode без точок переривань
	*/
	return 0;
}
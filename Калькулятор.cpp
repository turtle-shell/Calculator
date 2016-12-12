/* 0. 
Программа простейший калькулятор для работы с консольным меню.
Пример вывода меню:

Меню:
1 - Сложение
2 - Вычитание
3 - Возведение в степень
--
0 - Выход

Задание на пятерку: реализовать навигацию по меню с помощью курсора > и клавиш-стрелочек вверх-вниз 
и Enter для выбора конкретного пункта меню.Калькулятор,*/

#include "stdafx.h"
#include <iostream>
#include <math.h>
#include <conio.h>
#include <iomanip>
using namespace std;

bool done = 0;				//контролирует завершение работы программы

bool ShowMenu();			//показ меню
	
void _Fold();				//Сложение
void _Deduct();				//Вычитание
void _Multiply();			//Умножение
void _Divide();				//Деление
void _RaisedToThePower();	//Возведение в степень
void _Exit();				//Выход

int main()
{
	setlocale(LC_ALL, "Russian");
		
	while (!done)                     //главный цикл программы, работает, пока пользователю не надоест
		{
			done = ShowMenu();
		}
	_getch();
	return 0;
}

bool ShowMenu()
{
	int i;
	cout << "\t Меню\n";
	cout << "_________________\n";
	cout << "1 - Сложение \n2 - Вычитание \n3 - Умножение \n4 - Деление \n5 - Возведение в степень \n";
	cout << "_________________\n";
	cout << "0 - Выход \n";
	cout << "Введите число: \n";
	cin >> i;
	if (i == 1)
	{
		_Fold();
	}
	else if (i == 2)
	{
		_Deduct();
	}
	else if (i == 3)
	{
		_Multiply();
	}
	else if (i == 4)
	{
		_Divide();
	}
	else if (i == 5)
	{
		_RaisedToThePower();
	}
	else if (i == 0)
	{
		_Exit();
	}
	return 0;
}

void _Fold()			//Сложение
{
	int a, b;
	cout << "Введите первое слагаемое: a = ";
	cin >> a;
	cout << "Введите второе слагаемое: b = ";
	cin >> b;
	cout << "a = " << a << ", b = " << b << endl;
	cout << "a + b = " << a + b << endl << endl;
}

void _Deduct()			//Вычитание
{
	int a, b;
	cout << "Введите уменьшаемое: a = ";
	cin >> a;
	cout << "Введите вычитаемое: b = ";
	cin >> b;
	cout << "a = " << a << ", b = " << b << endl;
	cout << "a - b = " << a - b << endl << endl;
}

void _Multiply()		//Умножение
{
	int a, b;
	cout << "Введите первый множитель: a = ";
	cin >> a;
	cout << "Введите второй множитель: b = ";
	cin >> b;
	cout << "a = " << a << ", b = " << b << endl;
	cout << "a * b = " << a * b << endl << endl;
}

void _Divide()			//Деление
{
	double a, b;
	cout << "Введите делимое: a = ";
	cin >> a;
	cout << "Введите делитель: b = ";
	cin >> b;
	cout << "a = " << a << ", b = " << b << endl;
	cout << "a / b = " << setprecision(4) << a / b << endl << endl;
}

void _RaisedToThePower() //Возведение в степень	
{
	double a, b;
	cout << "Введите основание степени: a = ";
	cin >> a;
	cout << "Введите показатель степени: b = ";
	cin >> b;
	cout << a << "^" << b << " = " << pow(a, b) << endl;
}

void _Exit()
{
	exit(0);
}



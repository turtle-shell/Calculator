/* 0. 
��������� ���������� ����������� ��� ������ � ���������� ����.
������ ������ ����:

����:
1 - ��������
2 - ���������
3 - ���������� � �������
--
0 - �����

������� �� �������: ����������� ��������� �� ���� � ������� ������� > � ������-��������� �����-���� 
� Enter ��� ������ ����������� ������ ����.�����������,*/

#include "stdafx.h"
#include <iostream>
#include <math.h>
#include <conio.h>
#include <iomanip>
using namespace std;

bool done = 0;				//������������ ���������� ������ ���������

bool ShowMenu();			//����� ����
	
void _Fold();				//��������
void _Deduct();				//���������
void _Multiply();			//���������
void _Divide();				//�������
void _RaisedToThePower();	//���������� � �������
void _Exit();				//�����

int main()
{
	setlocale(LC_ALL, "Russian");
		
	while (!done)                     //������� ���� ���������, ��������, ���� ������������ �� �������
		{
			done = ShowMenu();
		}
	_getch();
	return 0;
}

bool ShowMenu()
{
	int i;
	cout << "\t ����\n";
	cout << "_________________\n";
	cout << "1 - �������� \n2 - ��������� \n3 - ��������� \n4 - ������� \n5 - ���������� � ������� \n";
	cout << "_________________\n";
	cout << "0 - ����� \n";
	cout << "������� �����: \n";
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

void _Fold()			//��������
{
	int a, b;
	cout << "������� ������ ���������: a = ";
	cin >> a;
	cout << "������� ������ ���������: b = ";
	cin >> b;
	cout << "a = " << a << ", b = " << b << endl;
	cout << "a + b = " << a + b << endl << endl;
}

void _Deduct()			//���������
{
	int a, b;
	cout << "������� �����������: a = ";
	cin >> a;
	cout << "������� ����������: b = ";
	cin >> b;
	cout << "a = " << a << ", b = " << b << endl;
	cout << "a - b = " << a - b << endl << endl;
}

void _Multiply()		//���������
{
	int a, b;
	cout << "������� ������ ���������: a = ";
	cin >> a;
	cout << "������� ������ ���������: b = ";
	cin >> b;
	cout << "a = " << a << ", b = " << b << endl;
	cout << "a * b = " << a * b << endl << endl;
}

void _Divide()			//�������
{
	double a, b;
	cout << "������� �������: a = ";
	cin >> a;
	cout << "������� ��������: b = ";
	cin >> b;
	cout << "a = " << a << ", b = " << b << endl;
	cout << "a / b = " << setprecision(4) << a / b << endl << endl;
}

void _RaisedToThePower() //���������� � �������	
{
	double a, b;
	cout << "������� ��������� �������: a = ";
	cin >> a;
	cout << "������� ���������� �������: b = ";
	cin >> b;
	cout << a << "^" << b << " = " << pow(a, b) << endl;
}

void _Exit()
{
	exit(0);
}



#include<iostream>

using namespace std;

int Add(int a, int b); //прототип функции
int Sub(int a, int b);
int Mul(int a, int b);
double Div(int a, int b);


void main()
{
	setlocale(LC_ALL, "Russian");
	int x, y;
	cout << "Введите два числа: "; cin >> x >> y;
	int c = Add(x, y); // использование функции - вызов функции
	cout << x << " + " << y << " = " << c << endl;
	cout << x << " - " << y << " = " << Sub(x, y) << endl;
	cout << x << " * " << y << " = " << Mul(x, y) << endl;
	cout << x << " / " << y << " = " << Div(x, y) << endl;
}

int Add(int a, int b) //реализация функции (определение функции)
{
	int c = a + b;
	return c;
}

int Sub(int a, int b)
{
	return a - b;
}

int Mul(int a, int b)
{
	return a * b;
}

double Div(int a, int b)
{
	return (double)a / b;
}

#pragma once
#include "constants.h"
#include"stdafx.h"

int Sum(int arr[], const int n);		//Возвращает сумму элементов массива
int Sum(int arr[ROWS][COLS], const int ROWS, const int COLS);

double Avg(int arr[], const int n);		//Возвращает среднее-арифметическое элементов массива
double Avg(int arr[ROWS][COLS], const int ROWS, const int COLS);

int minValueIn(int arr[], const int n);//Возвращает минимальное значение в массиве
int minValueIn(int arr[ROWS][COLS], const int ROWS, const int COLS);

int maxValueIn(int arr[], const int n);//Возвращает максимальное значение в массиве
int maxValueIn(int arr[ROWS][COLS], const int ROWS, const int COLS);
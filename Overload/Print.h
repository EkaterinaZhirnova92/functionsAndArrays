#pragma once
#include "constants.h"
#include "stdafx.h"

void Print(int arr[], const int n);		//Выводит массив на экран
void Print(double arr[], const int n);		//меняем тип переменной, перегружаем функцию
void Print(int arr[ROWS][COLS], const int ROWS, const int COLS);
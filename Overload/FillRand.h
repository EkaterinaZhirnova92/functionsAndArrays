#pragma once
#include "constants.h"
#include "stdafx.h"

void FillRand(int arr[], const int n);	//Заполняет массив случайными числами
void FillRand(double arr[], const int n);	//меняем тип переменной, перегружаем функцию
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS);
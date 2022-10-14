#pragma once
#include "stdafx.h"
#include "constants.h"

void ShiftLeft(int arr[], const int n, int number_of_shifts);	//Сдвигает массив на заданное число элементов влево
void ShiftLeft(int arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts);

void ShiftRight(int arr[], const int n, int number_of_shifts);//Сдвигает массив на заданное число элементов вправо
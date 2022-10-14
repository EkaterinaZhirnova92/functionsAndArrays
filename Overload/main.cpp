#include <iostream>
#include <stdlib.h>

using namespace std;

const int ROWS = 3;
const int COLS = 4;

void FillRand(int arr[], const int n);	//Заполняет массив случайными числами
void FillRand(double arr[], const int n);	//меняем тип переменной, перегружаем функцию
void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS);

template <typename T>
void Print(T arr[], const int n);		//Выводит массив на экран
template <typename T>
void Print(T arr[ROWS][COLS], const int ROWS, const int COLS);

template <typename T>
int Sum(T arr[], const int n);	
template <typename T>
int Sum(T arr[ROWS][COLS], const int ROWS, const int COLS);

template <typename T>
double Avg(T arr[], const int n);	
template <typename T>
double Avg(T arr[ROWS][COLS], const int ROWS, const int COLS);

template <typename T>
int minValueIn(T arr[], const int n);
template <typename T>
int minValueIn(T arr[ROWS][COLS], const int ROWS, const int COLS);

template <typename T>
int maxValueIn(T arr[], const int n);
template <typename T>
int maxValueIn(T arr[ROWS][COLS], const int ROWS, const int COLS);

template <typename T>
void ShiftLeft(T arr[], const int n, int number_of_shifts);	
template <typename T>
void ShiftLeft(T arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts);	

template <typename T>
void ShiftRight(T arr[], const int n, int number_of_shifts);

template <typename T>
void Sort(T arr[], const int n);
template <typename T>
void Sort(T arr[ROWS][COLS], const int ROWS, const int COLS);


void main()
{
	setlocale(LC_ALL, "Russian");
	const int n = 10;
	int arr[n] = { 1,2,3,4,5,6,7,8,9,10 };
	FillRand(arr, n);
	Print(arr, n);
	cout << "Сумма элементов массива: " << Sum(arr, n) << endl;
	cout << "Среднее-арифметическое элементов массива: " << Avg(arr, n) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(arr, n) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(arr, n) << endl;
	Sort(arr, n);
	Print(arr, n);
	int number_of_shifts; //количество сдвилв
	cout << "Введите количество сдвигов: "; cin >> number_of_shifts;
	ShiftLeft(arr, n, number_of_shifts);
	Print(arr, n);
	cout << "Введите количество сдвигов: "; cin >> number_of_shifts;
	ShiftRight(arr, n, number_of_shifts);
	Print(arr, n);

	cout << endl;
	const int SIZE = 8;
	int brr[SIZE];
	FillRand(brr, SIZE);
	Print(brr, SIZE);

	const int D_SIZE = 8;
	double d_brr[D_SIZE];  //изменили тип переменной
	FillRand(d_brr, D_SIZE);
	Print(d_brr, D_SIZE);
	cout << "далее двумерный массив: "<< endl;

	int i_arr_2[ROWS][COLS];
	FillRand(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);


	cout << "Сумма элементов массива: " << Sum(i_arr_2, ROWS, COLS) << endl;
	cout << "Среднее-арифметическое элементов массива: " << Avg(i_arr_2, ROWS, COLS) << endl;
	cout << "Минимальное значение в массиве: " << minValueIn(i_arr_2, ROWS, COLS) << endl;
	cout << "Максимальное значение в массиве: " << maxValueIn(i_arr_2, ROWS, COLS) << endl;

	cout << "Введите количество сдвигов: ";
	cin >> number_of_shifts;
	ShiftLeft(i_arr_2, ROWS, COLS, number_of_shifts);
	Print(i_arr_2, ROWS, COLS);
	cout << endl;
	cout << "сортировка массива: " << endl;
	Sort(i_arr_2, ROWS, COLS);
	Print(i_arr_2, ROWS, COLS);
}

void FillRand(int arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 100;
	}
}

void FillRand(double arr[], const int n)  //перегружаем реализацию функции
{
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % 10000;
		arr[i] /= 100;
	}
}

void FillRand(int arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for(int i = 0; i< ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			arr[i][j] = rand() % 100;
		}
	}
}

template <typename T>
void Print(T arr[], const int n)
{
	for (int i = 0; i < n; i++) {
		cout << arr[i] << "\t";
	}
	cout << endl;
}

template <typename T>
void Print(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			cout << arr[i][j] << "\t";
		}
		cout << endl;
	}
}

template <typename T>
int Sum(T arr[], const int n)
{
	int sum = 0;
	for (int i = 0; i < n; i++)
	{
		sum += +arr[i];
	}
	return sum;
}

template <typename T>
int Sum(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int sum = 0;
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			sum += +arr[i][j];
		}
	}
	return sum;
}


template <typename T>
double Avg(T arr[], const int n)
{
	return (double)Sum(arr, n) / n;
}


template <typename T>
double Avg(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	return (double)Sum(arr, ROWS, COLS) / (ROWS+COLS);
}

template <typename T>
int minValueIn(T arr[], const int n)
{
	int min = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (arr[i] < min)min = arr[i];
	}
	return min;
}

template <typename T>
int minValueIn(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int min = arr[0][0];
	for (int i = 1; i < ROWS; i++)
	{
		for (int j = 1; j < COLS; j++)
		{
			if (arr[i][j] < min)min = arr[i][j];
		}
	}
	return min;
}

template <typename T>
int maxValueIn(T arr[], const int n)
{
	int max = arr[0];
	for (int i = 1; i < n; i++)
	{
		if (arr[i] > max)max = arr[i];
	}
	return max;
}


template <typename T>
int maxValueIn(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	int max = arr[0][0];
	for (int i = 1; i < ROWS; i++)
	{
		for (int j = 1; j < COLS; j++)
		{
			if (arr[i][j] > max)max = arr[i][j];
		}
	}
	return max;
}

template <typename T>
void ShiftLeft(T arr[], const int n, int number_of_shifts)
{
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = arr[0];
		for (int i = 0; i < n; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}
}

template <typename T>
void ShiftRight(T arr[], const int n, int number_of_shifts)
{
	ShiftLeft(arr, n, n - number_of_shifts);
}

template <typename T>
void ShiftLeft(T arr[ROWS][COLS], const int ROWS, const int COLS, int number_of_shifts)
{
	for (int k = 0; k < number_of_shifts; k++)
	{
		for (int i = 0; i < ROWS; i++)
		{
			int buffer = arr[i][0];
			for (int j = 0; j < COLS; j++)
			{
				arr[i][j] = arr[i][j + 1];
			}
			arr[i][COLS - 1] = buffer;
		}
	}
}

template <typename T>
void Sort(T arr[], const int n)
{
	for (int i = 0; i < n; i++)
	{
		for (int j = i + 1; j < n; j++)
		{
			if (arr[j] < arr[i])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}
}

template <typename T>
void Sort(T arr[ROWS][COLS], const int ROWS, const int COLS)
{
	for (int i = 0; i < ROWS; i++)
	{
		for (int j = 0; j < COLS; j++)
		{
			for (int k = i; k < ROWS; k++)
			{
				for (int l = k == i ? j + 1 : 0; l < COLS; l++)
				{
					if (arr[k][l] < arr[i][j])
					{
						int buffer = arr[i][j];
						arr[i][j] = arr[k][l];
						arr[k][l] = buffer;
					}

				}
			}
		}
	}
}



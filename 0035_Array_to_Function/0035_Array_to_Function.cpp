//**********************************************************************************************
// Передача массива в функцию. Как передать массив в функцию. | C++ для начинающих | Урок #35
// ---------------------------------------------------------------------------------------------
// С++ | Visual Studio 2022 
// ---------------------------------------------------------------------------------------------
// Журавлёв Сергей | #SimpleCode | Udemy
// https://www.udemy.com/user/zhuravliov-sergei/
// 2019-2023 @ sgiman
//**********************************************************************************************

#include <iostream>

using namespace std;

/* Передача массива в функцию */

// --- FillArray ---
void FillArray(int arr[], const int size)
{
	for (int i = 0; i < size; i++)
	{
		arr[i] = rand() % 10;    // random numbers: 1...10
	}
}

// --- PrintArray ---
void PrintArray(int arr[], const int size)
{
	for (int i = 0; i < size; i++)
	{
		printf(" index: [%i]\t random-number: %i\n", i, arr[i]);
	}
}


// === main ====
void main()
{

	setlocale(LC_ALL, "ru");

	const int SIZE = 10;
	int massiv[SIZE];

	FillArray(massiv, SIZE);	// заполнить массив
	PrintArray(massiv, SIZE);	// вывести массив 

	system("pause");
}

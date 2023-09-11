//**************************************************************************************************
// Копирование динамического массива c++. Скопировать массив с++. | C++ для начинающих | Урок #58
// -------------------------------------------------------------------------------------------------
// С++ | Visual Studio 2022 
// -------------------------------------------------------------------------------------------------
// Журавлёв Сергей | #SimpleCode | Udemy
// https://www.udemy.com/user/zhuravliov-sergei/
// 2019-2023 @ sgiman
//**************************************************************************************************

#include <iostream>
#include "utils.h"

using namespace std;

/*
 *   Как скопировать динамический массив С++
 */

int main()
{
	setlocale(LC_ALL, "ru");

	int size = 10, max = 100;

	int* firstArray = new int[size];
	int* secondArray = new int[size];

	// --- ЗАПОЛНЕНИЕ МАССИВОВ ---

	FillArray(firstArray, size, max);		// заполнение массива случайными числами 
	FillArray(secondArray, size, max);

	cout << "FirstArray =\t";
	ShowArray(firstArray, size);
	cout << "SecondArray =\t";
	ShowArray(secondArray, size);

	// --- КОПИРОВАНИЕ МАССИВА ---

	delete[] firstArray;					// удаление исходного массива	
	firstArray = new int[size];				// создание нового массива (повторно)
	for (int i = 0; i < size; i++)
	{
		firstArray[i] = secondArray[i];
	}

	cout << "\n==============================================================\n" << endl;

	cout << "FirstArray =\t";
	ShowArray(firstArray, size);
	cout << "SecondArray =\t";
	ShowArray(secondArray, size);

	delete[]secondArray;
	delete[]firstArray;


	//=== END ===
	cout << endl;
	MyDate();
	system("pause");
	return 0;
}
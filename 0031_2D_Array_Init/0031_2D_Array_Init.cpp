//********************************************************************
// 0010_Abbreviated_arithmetic_forms | C++ для начинающих | Урок #10
// -------------------------------------------------------------------
// С++ | Visual Studio 2022 
// -------------------------------------------------------------------
// Журавлёв Сергей | #SimpleCode | Udemy
// https://www.udemy.com/user/zhuravliov-sergei/
// 2019-2023 @ sgiman
//********************************************************************

#include <iostream>

using namespace std;

/* 2D Array Initialization */

int main()
{
	setlocale(LC_ALL, "ru");

	const int ROW = 3;		// строки
	const int COL = 4;		// колонки

	int arr_1D[]{ 11,23,34,56 };					// одномерный массив - ручная инциализация 

	int arr_2D[][COL] = 						   	// ручная инциализация 2D Array ("= "- не обязательно!)
	{
		{11, 22, 33, 44},
		{55, 66, 77, 88},
		{101, 344, 23}								// 4-й элемент будет иницилизирован нулём 
	};

	int arr[ROW][COL]{};							// объявить 2D Array с нулями

	cout << "arr[0][0] = " << arr[0][0] << endl;
	cout << "arr[1][1] = " << arr[1][1] << endl;

	arr[0][0] = 111;
	arr[1][1] = 999;

	cout << "------------------------" << endl;
	cout << "arr[0][0] = " << arr[0][0] << endl;
	cout << "arr[1][1] = " << arr[1][1] << endl;


	//=== END ===
	cout << endl;
	system("pause");
	return 0;
}

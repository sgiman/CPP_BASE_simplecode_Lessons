﻿//********************************************************************************************
// Цикл for. Фишки. Фичи. Особенности. Несколько переменных | C++ для начинающих | Урок #17
// -------------------------------------------------------------------------------------------
// С++ | Visual Studio 2022 
// -------------------------------------------------------------------------------------------
// Журавлёв Сергей | #SimpleCode | Udemy
// https://www.udemy.com/user/zhuravliov-sergei/
// 2019-2023 @ sgiman
//********************************************************************************************

#include <iostream>

using namespace std;

// Цикл for

int main()
{
	setlocale(LC_ALL, "ru");

	int i = 0;

	cout << " 1-й цикл: " << endl;
	for (; i < 10; i++)
	{
		cout << "Пеменнная i: " << i << endl;
	}

	cout << "--------------------\n";
	cout << " 2-й цикл: " << endl;

	for (; i < 20; i++)
	{
		cout << "Пеменнная i: " << i << endl;
	}

	cout << "--------------------\n";
	cout << " 3-й цикл: " << endl;

	for (i = 0; i < 10;)
	{
		cout << "Пеменнная i: " << i << endl;
		i++;
	}

	cout << "--------------------\n";
	cout << " 4-й цикл: " << endl;

	/*
	for (;;)
	{
		cout << "Бесконечный цикл" << endl;
	}
	*/

	for (int i = 0, j = 10; i < 10 && j != 5; i++, j--)
	{
		cout << "Переменная i = " << i << endl;
		cout << " Переменная j = " << i << endl;
	}

	//=== END ===
	cout << endl;
	cin.get();
	return 0;
}

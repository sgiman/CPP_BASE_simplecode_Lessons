﻿//************************************************************************************************
// Циклы. Цикл do while. Что это. Что делает. Пример. Синтаксис. | C++ для начинающих | Урок #15
// -----------------------------------------------------------------------------------------------
// С++ | Visual Studio 2022 
// -----------------------------------------------------------------------------------------------
// Журавлёв Сергей | #SimpleCode | Udemy
// https://www.udemy.com/user/zhuravliov-sergei/
// 2019-2023 @ sgiman
//************************************************************************************************

#include <iostream>

using namespace std;

// Цикл do while

int main()
{
	setlocale(LC_ALL, "Rus");

	int a = 19;

	// do-while (хотя бы один раз цикл выполнится)
	do
	{
		cout << "Перменная a = " << a << endl;
		a++;

	} while (a < 20);

	/*
	// while
	while (a < 20)
	{
		cout << "Перменная a = " << a << endl;
		a++;
	}
	*/


	//=== END ===
	cout << endl;
	cin.get();
	return 0;
}

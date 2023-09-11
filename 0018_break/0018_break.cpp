﻿//*****************************************************************************************************
// Ключевое слово break. Оператор break. Описание. Пример. Синтаксис. | C++ для начинающих | Урок #18
// ----------------------------------------------------------------------------------------------------
// С++ | Visual Studio 2022 
// ----------------------------------------------------------------------------------------------------
// Журавлёв Сергей | #SimpleCode | Udemy
// https://www.udemy.com/user/zhuravliov-sergei/
// 2019-2023 @ sgiman
//*****************************************************************************************************

#include <iostream>

using namespace std;

/* Клчючевое слово break */

int main()
{
	setlocale(LC_ALL, "ru");

	cout << "Начало цикла for" << endl;
	for (int i = 0; ; i++)
	{
		cout << " переменнная i = " << i << endl;
		if (i == 5)
		{
			cout << " === BREAK === " << endl;
			break;
		}
	}
	cout << "Конец цикла for\n" << endl;


	int i = 0;
	cout << "Начало цикла while" << endl;
	while (true)
	{
		cout << " переменнная i = " << i << endl;
		i++;
		if (i == 5)
		{
			cout << " === BREAK === " << endl;
			break;
		}
	}
	cout << "Конец цикла while" << endl;


	//=== END ===
	cout << endl;
	cin.get();
	return 0;
}

﻿//**************************************************************************************************************
// Логические операции. Операторы сравнения, равенства, объединения, инверсия. | C++ для начинающих | Урок #12
// -------------------------------------------------------------------------------------------------------------
// С++ | Visual Studio 2022 
// -------------------------------------------------------------------------------------------------------------
// Журавлёв Сергей | #SimpleCode | Udemy
// https://www.udemy.com/user/zhuravliov-sergei/
// 2019-2023 @ sgiman
//**************************************************************************************************************
#include <iostream>

using namespace std;

/*
	Констркукция логического в выбора if
	Лесенка if-else-if
*/

int main()
{
	setlocale(LC_ALL, "Rus");

	// EXAMPLE 1
	bool isRain = false;

	if (isRain)
	{
		cout << "Идёт дождь, нам нужен зонт!" << endl;
	}
	else
	{
		cout << "Дождя нет, зонт не нужен!" << endl;
	}

	// EXAMPLE 2
	int a;

	cout << "Ввeдите число: ";
	cin >> a;

	if (a < 5)
	{
		cout << "Ваше число < 5!" << endl;
	}
	else if (a == 5)
	{
		cout << "Ваше число == 5!" << endl;
	}
	else
	{
		cout << "Ваше число > 5!" << endl;
	}


	//=== END ===
	cout << endl;
	cin.get();
	return 0;
}

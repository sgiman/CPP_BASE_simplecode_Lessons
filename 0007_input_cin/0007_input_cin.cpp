﻿//**********************************************************************
// Ввод данных. Cin. Пример. Синтаксис. | C++ для начинающих | Урок #7
// ---------------------------------------------------------------------
// С++ | Visual Studio 2022 
// ---------------------------------------------------------------------
// Журавлёв Сергей | #SimpleCode | Udemy
// https://www.udemy.com/user/zhuravliov-sergei/
// 2019-2023 @ sgiman
//**********************************************************************

#include <iostream>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");

	int Var, Var2;

	cout << " Введите первое число: ";
	cin >> Var;										// cin - <iostream>

	cout << " Введите второе число: ";
	cin >> Var2;

	cout << " Число 1: " << Var << endl << " Число 2: " << Var2 << endl;

	//=== END ===
	cout << endl;
	cin.get();
	return 0;
}

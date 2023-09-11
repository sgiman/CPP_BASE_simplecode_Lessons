﻿//*******************************************************************************************************
// Cсылки что это. c++ ссылки и указатели разница. Указатель на ссылку. | C++ для начинающих | Урок #10
// ------------------------------------------------------------------------------------------------------
// С++ | Visual Studio 2022 
// ------------------------------------------------------------------------------------------------------
// Журавлёв Сергей | #SimpleCode | Udemy
// https://www.udemy.com/user/zhuravliov-sergei/
// 2019-2023 @ sgiman
//*******************************************************************************************************

#include <iostream>
#include "utils.h"

using namespace std;

/*
 *	ссылки
 */

int main()
{
	setlocale(LC_ALL, "ru");

	// -- REFERENCES (ССЫЛКИ) --

	int a = 5;			// 1. з н а ч е н и е премеменный "a" (значение)

	int* pa = &a;		// 2. у к а з а т е л ь  (адрес) "*pa"

	int& aref = a;		// 3. с с ы л к а (адрес) "&aRef"

	cout << " Адрес pa:\t" << pa << endl;				// адрес
	cout << " Адрес &aref:\t" << &aref << endl;			// адрес
	cout << endl;
	cout << "Содержимое *pa = \t" << *pa << endl;		// содержимое
	cout << "Содержимое aref = \t" << aref << endl;		// содержимое

	/* ссылки обеспечивают прямой доступ к данным */
	aref = aref + 2;		// 5 + 2 = 7
	aref = aref - 2;		// 5 -2 = 3


	//=== END ===
	cout << endl;
	MyDate();
	system("pause");
	return 0;
}

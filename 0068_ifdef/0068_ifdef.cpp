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
#include "utils.h"

#define DEBUG 5

using namespace std;

/*---------------------------------------------------------------------
 *	Условная компиляция:
 *	Директивы условной компиляции:
 *	#ifdef #else #endif #if #elif #endif #ifndef
 ---------------------------------------------------------------------*/

int main()
{
	setlocale(LC_ALL, "ru");

#if DEBUG
	cout << "\n --> Начало цикла" << endl;
#endif // DEBUG

	for (int i = 0; i < 4; i++)
	{
		cout << "\t" << i << endl;
	}

#ifdef DEBUG 
	cout << " <-- Конец цикла\n" << endl;
#endif


#ifdef DEBUG
	cout << "\nДебаг определен\n" << endl;
#else
	cout << "\nДебаг НЕ определен\n" << endl;
#endif


#ifndef DEBUG
	cout << "\n-- DEBAG OFF --\n" << endl;
#else
	cout << "\n-- DEBAG ON --\n" << endl;
#endif


#if DEBUG > 4
	cout << "\n-- DEBAG > 4 --\n" << endl;
#else
	cout << "\n-- DEBAG не меньше 4 --\n" << endl;
#endif


#if DEBUG < 4
	cout << "\n-- DEBAG > 4 --\n" << endl;
#elif DEBUG == 5
	cout << "\n-- DEBAG == 5 --\n" << endl;
#endif


	//=== END ===
	cout << endl;
	MyDate();
	system("pause");
	return 0;
}
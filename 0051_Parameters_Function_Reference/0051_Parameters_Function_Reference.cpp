//***************************************************************************************************************
// Передача параметров в функцию по ссылке. Разница между ссылкой и указателем. | C++ для начинающих | Урок #51
// --------------------------------------------------------------------------------------------------------------
// С++ | Visual Studio 2022 
// --------------------------------------------------------------------------------------------------------------
// Журавлёв Сергей | #SimpleCode | Udemy
// https://www.udemy.com/user/zhuravliov-sergei/
// 2019-2023 @ sgiman
//***************************************************************************************************************

#include <iostream>
#include "utils.h"

using namespace std;

/*
	Ссылочные параметры. Передача аггментов по ссылке.
*/

// параметер по значению
void  foo(int a)
{
	a = 1;
}


// параметер по ссылке
void  foo2(int& a)
{
	a = 2;
}


// параметeр по указателю 
void  foo3(int* a)
{
	*a = 3;
}


int main()
{
	setlocale(LC_ALL, "ru");


	// -- REF-PAR-FUNCTIONS --

	int value = 5;
	cout << endl;
	cout << "START: value = " << value << endl << endl;;

	foo(value);
	cout << " foo (a): value = " << value << endl << endl;

	foo2(value);
	cout << " foo2 (&a): value = " << value << endl << endl;

	foo3(&value);
	cout << " foo3 (*a): value = " << value << endl << endl;

	cout << "END: value = " << value << endl;


	//=== END ===
	cout << endl;
	MyDate();
	system("pause");
	return 0;
}
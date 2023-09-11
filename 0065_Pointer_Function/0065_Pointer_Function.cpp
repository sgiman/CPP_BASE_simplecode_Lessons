//********************************************************************************************************************
// Указатель на функцию в качестве параметра. Передача функции в качестве параметра. | C++ для начинающих | Урок #66
// -------------------------------------------------------------------------------------------------------------------
// С++ | Visual Studio 2022 
// -------------------------------------------------------------------------------------------------------------------
// Журавлёв Сергей | #SimpleCode | Udemy
// https://www.udemy.com/user/zhuravliov-sergei/
// 2019-2023 @ sgiman
//********************************************************************************************************************

#include <iostream>
#include <string> 
#include "utils.h"

using namespace std;

/*
	Указатели на функцию

	тип_функции (*имя_указателя)(спецификация параметров)
*/


// --- Foo1 ---
int Foo1(int a)
{
	cout << "\t" << "void \"Foo1()\"" << endl;
	return a - 1;

}

// --- Foo2 ---
int Foo2(int a)
{
	cout << "\t" << "void \"Foo2()\"" << endl;
	return a * 2;
}


// --- Get data from BD ---
string GetDataFromBD()
{
	return "Data From DB";
}


// --- Get data from Web Server ---
string GetDataFromWebServer()
{
	return "Data From WebServer";
}


// --- Get data from Astral ---
string GetDataFromAstral()
{
	return "Data From Astral";
}

/*----------------------------
		  Show Info
-----------------------------*/
void ShowInfo(string(*foo)())
{
	cout << foo() << endl;
}


/*
void ShowInfo(bool isFrom_BD)
{
	if (isFrom_BD)
		cout << DataFromBD() << endl;
	else
		cout << DataFromWebServer() << endl;
}
*/


/*=== main ===*/
int main()
{
	setlocale(LC_ALL, "ru");

	/*
	 *	 Указатели на функцию (присвоить переменной адрес функнции)
	 *   указатель на фукнцию аналогичен полиморфизму в ООП
	 *   указатель на фукнцию похож на делегаты в C#
	 *   укаазтель на функцию напоминает прототип(шаблон) функции
	 */

	 /* ================= POINTER FUNCTION =================*/

	cout << endl;

	int(*fooPointer)(int a);			// указатель на функцию 

	fooPointer = Foo1;					// назначить указатель на ф-ю Foo1()
	cout << "\tFoo1 = " << fooPointer(5) << endl;
	cout << endl;

	fooPointer = Foo2;					// назначить указатель на ф-ю Foo2()
	cout << "\tFoo2 = " << fooPointer(3) << endl;

	cout << "\n===========================================================\n" << endl;

	ShowInfo(GetDataFromBD);			// вызов через указатель на ф-ю "GetDataFromBD"
	cout << endl;

	ShowInfo(GetDataFromWebServer);		// вызов через указатель на ф-ю "GetDataFromWebServer"
	cout << endl;

	ShowInfo(GetDataFromAstral);		// вызов через указатель на ф-ю "GetDataFromAstral"
	cout << endl;

	/*
	ShowInfo(true);
	cout << endl;
	ShowInfo(false);
	*/

	//=== END ===
	cout << endl;
	MyDate();
	system("pause");
	return 0;
}
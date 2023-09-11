//**********************************************************************
// C++ для начинающих | Урок #10
// Указатели c++ что это. Для чего нужны. Указатели c++ разыменование.
// ---------------------------------------------------------------------
// С++ | Visual Studio 2022 
// ---------------------------------------------------------------------
// Журавлёв Сергей | #SimpleCode | Udemy
// https://www.udemy.com/user/zhuravliov-sergei/
// 2019-2023 @ sgiman
//**********************************************************************

#include <iostream>
#include "utils.h"

using namespace std;

// -- Pointers and Links --

void main()
{
	setlocale(LC_ALL, "ru");

	// -- POINTERS (УКАЗАТЕЛИ) --

	int a = 5;
	double b = 1.495;
	cout << " a = " << a << endl;

	int* pа = &a;		// Адрес (присвоить  указателю адрес ячейки с содержимым)
	double* pb = &b;	// Арес для типа double
	cout << "\n ---> Aдрес для \"int a\" --> " << pа << endl;
	cout << "\n ---> Aдрес для \"double b\" --> " << pb << endl;

	int* px = &a;
	int* px2 = &a;
	cout << " a = " << a << endl;

	cout << "\n ---> Aдрес для \"int *px\"\t" << px << endl;
	cout << "\n ---> Aдрес для \"int *px2\"\t" << px2 << endl;

	*px = 2;
	cout << " a = " << a << endl;

	//====== END ======
	cout << endl;
	MyDate();
	system("pause");
	return;
}

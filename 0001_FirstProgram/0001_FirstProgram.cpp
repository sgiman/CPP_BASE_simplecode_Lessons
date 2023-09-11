//************************************************************************************
// Visual studio. Как создать проект. Первая программа. C++ для начинающих | Урок #1
//------------------------------------------------------------------------------------
// С++ | Visual Studio 2022 
//------------------------------------------------------------------------------------
// Журавлёв Сергей | #SimpleCode | Udemy
// https://www.udemy.com/user/zhuravliov-sergei/
// 2019-2023 @ sgiman
//************************************************************************************
#include <iostream>
#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <clocale>

using namespace std;

int main()
{
	setlocale(LC_ALL, "Rus");

	cout << "\n \"HELLO WORLD!\" \n";				// <iostream>
	cout << endl << " Hello World!" << endl;
	printf(" HALLO WELT!\n");
	puts(" ПРИВIТ СВIТ!!");
	fprintf(stderr, " ПРИВЕТ МИР!");


	//=== END ===
	cout << endl;
	cin.get();
	return 0;

}
//************************************************************************************
// Visual studio. Как создать проект. Первая программа. C++ для начинающих | Урок #2
//------------------------------------------------------------------------------------
// С++ | Visual Studio 2022 
//------------------------------------------------------------------------------------
// Журавлёв Сергей | #SimpleCode | Udemy
// https://www.udemy.com/user/zhuravliov-sergei/
// 2019-2023 @ sgiman
//************************************************************************************

#include <iostream>
#include <string>
#include <clocale>

using namespace std;

int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "Rus");
	//setlocale(0, "");
	//setlocale(LC_ALL, "ru");
	//setlocale(LC_ALL, "Rus"); 

	cout << "\n Привет МИР!" << endl;

	//=== END ===
	cout << endl;
	cin.get();
	return 0;
}

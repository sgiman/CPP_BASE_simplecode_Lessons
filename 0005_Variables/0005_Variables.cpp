//*************************************************************************************
// Переменные. Способы объявления. Правила именования. | C++ для начинающих | Урок #7
//-------------------------------------------------------------------------------------
// С++ | Visual Studio 2022 
//-------------------------------------------------------------------------------------
// Журавлёв Сергей | #SimpleCode | Udemy
// https://www.udemy.com/user/zhuravliov-sergei/
// 2019-2023 @ sgiman
//*************************************************************************************

#include <iostream>

using namespace std;

// тип_данных имя_переменной;

int main(int argc, char* argv[])
{
	setlocale(LC_ALL, "ru");

	int a = 5;
	cout << "a = " << a << endl;

	a = 10;
	cout << "a = " << a << endl;

	int b = 1 , c = 2, Age = 10;
	cout << Age << " " << b << " " << c << endl;

	double n = 1.551;
	cout << n << endl;

	char s = 'f';
	cout << s << endl;

	bool f = true;
	cout << f << endl;	// 1

	f = false;
	cout << f << endl;	// 0


	//=== END ===
	cout << endl;
	cin.get();
	return 0;
}

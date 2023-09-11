//*******************************************************************
// Константы. Ключевое слово const. | C++ для начинающих | Урок #3
// ------------------------------------------------------------------
// С++ | Visual Studio 2022 
// ------------------------------------------------------------------
// Журавлёв Сергей | #SimpleCode | Udemy
// https://www.udemy.com/user/zhuravliov-sergei/
// 2019-2023 @ sgiman
//*******************************************************************

#include <iostream>

using namespace std;

// Константа - именованная область оперативной памяти с неизменяемыми значениями  

int main()
{
	setlocale(LC_ALL, "Rus");

	const int COUNT_DAYS_IN_WEEK = 7;
	const char NEW_LINE = '\n';
	const char TAB = '\t';

	cout << NEW_LINE << TAB << COUNT_DAYS_IN_WEEK << NEW_LINE;


	//=== END ===
	cout << "\n=== КОНЕЦ ===" << endl;
	cin.get();
	return 0;
}

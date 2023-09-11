//*****************************************************************************************************
// C++ для начинающих.
// inline c++ что это. Ключевое слово inline. Встраиваемая функция. C++ для начинающих. Урок #39
// Перегрузка функций c++ пример.Что такое перегрузка функций. Как перегрузить функцию. Урок #40
// Шаблоны функций. Шаблонные функции c++. template typename. template class. Урок #41
// ---------------------------------------------------------------------------------------------------- 
// С++ | Visual Studio 2022 
// ---------------------------------------------------------------------------------------------------- 
// Журавлёв Сергей | #SimpleCode | Udemy
// https://www.udemy.com/user/zhuravliov-sergei/
// 2019-2023 @ sgiman
//*****************************************************************************************************

#include <iostream>
#include "utils.h"

/*------------------------------------------------
 *  Ключевое слово inline. Встраиваемая фукция
 *----------------------------------------------*/

 // парметры по умолчанию
void foo(int a = 2, int b = 5, double c = 10.5, char s = 'C')
{
	cout << "foo: " << "A = " << a;
	cout << endl;
	cout << "foo: " << "B = " << b;
	cout << endl;
	cout << "foo: " << "C = " << c;
	cout << endl;
	cout << "foo: " << "SYM = " << s;
	cout << endl;
}

// inline - втраиваемая функция для оптимизации кода (увеличивает произодительность, дублируя код функции в главной программе)
// объёмные функции не встриваются в код 
inline int Sum_a(int a, int b)
{
	return a + b;
}


// --- перегрузка ---
int Sum(int a, int b)
{
	return a + b;
}
double Sum(double a, double b)
{
	return a + b;
}
int Sum(int a, int b, int c)
{
	return a + b + c;
}

// --- шаблоны функциий ---
template <typename T>
T SumT(T a, T b)
{
	return a + b;
}
template <typename T1, typename T2>
T1 SumT_t(T1 a, T2 b)
{
	return a + b;
}
template <typename T1, typename T2>

void Ft(T1 a, T2 b)
{
	cout << "Ft: " << a << endl;
	cout << "Ft: " << b << endl;
	cout << endl;
}
template <class T>	// "class" OR "typename"
void Ft_t(T a)
{
	cout << "Ft_t: " << a << endl;
	cout << endl;
}


// ***** main *****
int main()
{
	setlocale(LC_ALL, "ru");

	// парметры по умолчанию 
	foo();
	cout << endl;
	foo(10);
	cout << endl;
	foo(10, 25, 111.123);
	cout << endl;
	foo(10, 25, 5.05, 'A');
	cout << endl;

	// inline - встриваемая функция
	Sum_a(1, 2);

	// перегрузка 
	cout << "Прерeгрузка 1: " << Sum(1, 2) << endl;
	cout << "Пререгрузка 2: " << Sum(10.5, 5.1) << endl;
	cout << "Пререгрузка 3: " << Sum(2, 3, 7) << endl;
	cout << endl;

	// шаблон 1
	cout << "SumT (1): " << SumT(1, 2) << endl;
	cout << "SumT (2): " << SumT(10.2, 5.05) << endl;

	// шаблон 2
	cout << "SumT_t (1): " << SumT_t(5, 10.4) << endl;
	cout << "SumT_t (2): " << SumT_t(10.5, 7) << endl;

	// шаблон 3
	cout << endl;
	Ft(2.5, 3.5);
	Ft(10, 5.4);
	Ft(2, 3);
	Ft(10.5, 7);

	// шаблон 4
	Ft_t(10);

	/*************
	   TIME-DATE
	**************/
	MyDate();

	//------ END ------
	cout << endl;
	system("pause");
	return 0;
}

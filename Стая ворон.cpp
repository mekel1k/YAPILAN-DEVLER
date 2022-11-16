#include <iostream>                     // ФИО: Экелик Мухаммет       Группа: 3530904/20007   
#include <cmath>                       // Лабораторная работа №1 
using namespace std;                  // Стая ворон
int main()
{
	setlocale(LC_ALL, "Russian");
	int n = 0;
	double Nturev = 0.0;  // Поскольку мне нужны только естественные числа.
	int X = 1; // Поскольку мне нужны только естественные числа.
	cout << "Введите естественное число:";
	cin >> Nturev;
	cout << endl << endl;
	n = static_cast<int>(Nturev); // Потому что N(Nturev,n) является натуральным числом (N – целое, N >= 1).

	if (!cin.good() || Nturev < X || n != Nturev) // Потому что я не хочу ничего, кроме естественного числа.
	{
		cerr << "Ввод некорректен, завершение программы";
		cout << endl << endl;
	}
	else if (n % 3 == 1)
	{
		cout << "В стае " << n << " ворона:" << endl;
	}
	else if (n % 3 == 2)
	{
		cout << "В стае " << n << " ворон:" << endl;
	}
	else
	{
		cout << "В стае " << n << " вороны:" << endl;
	}
	return 0;
}
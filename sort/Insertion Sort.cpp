﻿
#include <iostream>
using namespace std;

int main()
{
	const int N = 10;
	int a[N] = { 12, 5, 3, 2, 45, 96, 6, 8, 11, 24 };

	int buff = 0; // для хранения перемещаемого значения
	int i, j; // для циклов 

	/************* Начало сортировки *******************/
	for (i = 1; i < N; i++)
	{
		buff = a[i]; // запомним обрабатываемый элемент 5
		// и начнем перемещение элементов слева от него
		// пока запомненный не окажется меньше чем перемещаемый
		for (j = i - 1; j >= 0 && a[j] > buff; j--)
			a[j + 1] = a[j];// arr[1] = 12 
		cout << "j" << j << endl;
		a[j + 1] = buff;  // и поставим запомненный на его новое место 12 5
		cout << "----------" << endl;
		for (int i = 0; i < N; i++) // вывод отсортированного массива
			cout << a[i] << " ";
		cout << "----------" << endl;
	}
	/************* Конец сортировки *******************/

	for (int i = 1; i < 6; i++)
	{
		cout << i << endl;
	}

}
//Arrays
#include<iostream>
using namespace std;
using std::cout;
using std::cin;
using std::endl;

#define tab "\t"

//#define ARRAY
//#define CLASSWORK
//#define ARRAY_1
//#define ARRAY_2
//#define ARAAY_3
//#define ARRAY_4
//#define ARRAY_5
//#define ARRAY_6

void main()
{
	setlocale(LC_ALL, "");

	const int SIZE = 5;
	int arr[SIZE] = { 21,7,11,5,12 };

#ifdef ARRAY
	arr[2] = 2048;
	cout << arr[2] << endl;

	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << "\t";
	}
	cout << endl;
#endif // ARRAY

#ifdef CLASSWORK
	//Вывод элементов массива с клавиатуры
	cout << "Введите элементы массива:";
	for (int i = 0; i < SIZE; i++)
	{
		cin >> arr[i];
	}
	//Вывод массива на экран в прямом порядке:
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
	//Вывод массива на экран в обратном порядке:
	for (int i = SIZE - 1; i >= 0; i--)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
	//Вычисление суммы элементов массива:
	int sum = 0;
	for (int i = 0; i < SIZE; i++)
	{
		sum += arr[i];
	}
	cout << "Сумма элементов массива:" << sum << endl;
	cout << "Среднее-арифметическое:" << (double)sum / SIZE << endl;
	//Поиск минимального и максимального значения в массиве:
	int min, max;
	min = max = arr[0];
	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] < min)min = arr[i];
		if (arr[i] > max)max = arr[i];
	}
	cout << "Минимальное значение в массиве:" << min << endl;
	cout << "Максимальное значение в массиве:" << max << endl;
#endif // CLASSWORK

#ifdef ARRAY_1
	
	for (int i = 0; i < SIZE; i++)
	{
		cout << "Введите элемент массива:"; cin >> arr[i];
	}
	cout << endl;
#endif // ARRAY_1

#ifdef ARRAY_2
	for (int i = 0; i < SIZE; i++)
	{
		cout << arr[i] << endl;
	}
	cout << endl;
#endif // ARRAY_2

#ifdef ARRAY_3
	for (int i = SIZE - 1; i >= 0; i--)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
#endif // ARRAY_3

#ifdef ARRAY_4
	int sum = 0;
	for (int i = 0; i < SIZE; i++)
	{
		sum += arr[i];
	}
		cout << "Сумма элементов массива:" << sum << endl;
#endif // ARRAY_4

#ifdef ARRAY_5
	int sum = 0;
	for (int i = 0; i < SIZE; i++)
	{
		sum += arr[i];
	}
	cout << "Среднее-арифметическое:" << (double)sum / SIZE << endl;
#endif // ARRAY_5

#ifdef ARRAY_6
	int max = arr[0];
	int min = arr[0];
	for (int i = 0; i < SIZE; i++)
	{
		if (arr[i] < min)min = arr[i];
		if (arr[i] > max)max = arr[i];
	}
	cout << "Минимальное значение:" << min << endl;
	cout << "Максимальное значение:" << max << endl;
#endif // ARRAY_6

}
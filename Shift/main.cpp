#include<iostream>
using namespace std;

#define tab "\t"
//#define SHIFT_LEFT
//#define SHIFT_RIGHT
//#define SHIFT_RIGHT_CLASSWORK

void main()
{
	setlocale(LC_ALL, "");
	cout << double() << endl;
	//int() - значение по умолчанию для типа 'int'
	//int() - значение по умолчанию для типа 'double'
	const int n = 10;
	int arr[n] = { 0, 1, 1, 2, 3, 5, 8, 13, 21, 34 };

	//Вывод исходного массива на экран:
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;

	//Сдвиг массива
	int number_of_shifts;
	cout << "Введите количество сдвигов:"; cin >> number_of_shifts;

#ifdef SHIFT_LEFT
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = arr[0];
		for (int i = 1; i < n; i++)
		{
			arr[i - 1] = arr[i];
		}
		arr[n - 1] = buffer;
	}
#endif // SHIFT_LEFT

#ifdef SHIFT_RIGHT
	for (int i = 0; i < n - number_of_shifts; i++)
	{
		int buffer = arr[0];
		for (int i = 0; i < n - 1; i++)
		{
			arr[i] = arr[i + 1];
		}
		arr[n - 1] = buffer;
	}
#endif // SHIFT_RIGHT

#ifdef SHIFT_RIGHT_CLASSWORK
	for (int i = 0; i < number_of_shifts; i++)
	{
		int buffer = arr[n - 1];
		for (int i = n - 1; i > 0; i--)
		{
			arr[i] = arr[i - 1];
		}
		arr[0] = buffer;
	}

#endif // SHIFT_RIGHT_CLASSWORK

	//Вывод сдвинутого массива на экран:
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
}
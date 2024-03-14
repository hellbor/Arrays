//Arrays
#include<iostream>
using namespace std;
using std::cout;
using std::cin;
using std::endl;

//#define ARRAY
//#define ARRAY_1
//#define ARRAY_2
//#define ARRAY_4
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

#ifdef ARRAY_4
	int sum = 0;
	for (int i = 0; i < SIZE; i++)
	{
		sum += arr[i];
		cout << "Сумма элементов массива:" << sum << endl;
	}
#endif // ARRAY_4

#ifdef ARRAY_6
	int max = arr[0];
	int min = arr[0];
	for (int i = 0; i < SIZE; i++)
	{
		if (min > arr[i])
			min = arr[i];
		if (max < arr[i])
			max = arr[i];
	}
	cout << "Минимальное значение:" << min << endl;
	cout << "Максимальное значение:" << max << endl;
#endif // ARRAY_6

}
#include<iostream>
using std::cin;
using std::cout;
using std::endl;

#define tab "\t"

void main()
{
	setlocale(LC_ALL, "");
	const int n = 5;
	int arr[n];
	int minRand, maxRand;
	cout << "Введите минимальное случайное число:"; cin >> minRand;
	cout << "Введите максимальное случайное число:"; cin >> maxRand;
	//заполнение массива случайными числами:
	for (int i = 0; i < n; i++)
	{
		arr[i] = rand() % (maxRand - minRand) + minRand;
	}

	//вывод массива на экран:
	for (int i = 0; i < n; i++)
	{
		if (minRand < maxRand)cout << arr[i] << tab;
		else if (minRand > maxRand)cout << "ERROR" << endl;
		else if (minRand == maxRand)cout << "ERROR" << endl;
	}
	while (minRand != maxRand && minRand < maxRand);

	//сортировка массива
	for (int i = 0; i < n; i++)//выбирает элемент в который нужно поместить
	{
		for (int j = i + 1; j < n; j++)//перебирает оставшиеся элементы
		{
			//arr[i] - выбранный элемент
			//arr[j] - перебираемый элемент
			if (arr[j] < arr[i])
			{
				int buffer = arr[i];
				arr[i] = arr[j];
				arr[j] = buffer;
			}
		}
	}

	//вывод отсортированного массива на экран
	for (int i = 0; i < n; i++)
	{
		if (minRand < maxRand)cout << arr[i] << tab;
	}
	cout << endl;
}
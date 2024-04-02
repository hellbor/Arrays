#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

#define tab "\t"

//#define UNIQUE_1
//#define UNIQUE_2

void main()
{
	setlocale(LC_ALL, "");
	const int n = 10;
	int arr[n];

#ifdef UNIQUE_1
	int minRand = 20;
	int maxRand = 30;
	for (int i = 0; i < n; i++)
	{
		bool unique;
		do
		{
			arr[i] = rand() % (maxRand - minRand) + minRand; unique = true;
			for (int j = 0; j < i; j++)
			{
				if (arr[i] == arr[j])
				{
					unique = false;
					break;
				}
			}
		} while (!unique);
	}

	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
	
#endif // UNIQUE_1

#ifdef UNIQUE_2
	//заполнение массива уникальными случайными числами:
	for (int i = 0; i < n; i++)
	{
		bool unique;
		do
		{
			arr[i] = rand() % n; unique = true;
			for (int j = 0; j < i; j++)
			{
				if (arr[i] == arr[j])
				{
					unique = false;
					break;
				}
			}
		} while (!unique);
	}

	//вывод массива на экран:
	for (int i = 0; i < n; i++)
	{
		cout << arr[i] << tab;
	}
	cout << endl;
#endif // UNIQUE_2

}
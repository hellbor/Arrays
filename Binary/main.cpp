#include<iostream>
using namespace std;

void main()
{
	setlocale(LC_ALL, "");
	int decimal;
	cout << "Введите десятичное число:"; cin >> decimal;
	const int MAX_CAPACITY = 32;
	bool binary[MAX_CAPACITY]{};
	int i = 0;
	for (; decimal > 0; i++)
	{
		binary[i] = decimal % 2;
		decimal /= 2;
	}
	for (--i; i >= 0; i--)
	{
		cout << binary[i];
	}
	cout << endl;
}
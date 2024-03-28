#include<iostream>
using namespace std;

//#define BINARY
#define HEX

void main()
{
	setlocale(LC_ALL, "");
	int decimal;
	cout << "Введите десятичное число:"; cin >> decimal;

#ifdef BINARY
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
#endif // BINARY

#ifdef HEX
	const int MAX_HEX_CAPACITY = 8;
	char hex[MAX_HEX_CAPACITY] = {};
	int i = 0;
	for (; decimal; i++)
	{
		hex[i] = decimal % 16;
		decimal /= 16;
	}
	for (--i; i >= 0; i--)
	{
		cout << (hex[i] < 10 ? (char)hex[i] + 48 : char(hex[i] + 55));
	}
	cout << endl;
#endif // HEX

}
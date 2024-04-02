#include<iostream>
using namespace std;
using std::cin;
using std::cout;
using std::endl;

#define tab "\t"

void main()
{
	setlocale(LC_ALL, "");
	const int n = 1;
	int arr[n];
	int minRand = 20;
	int maxRand = 30;
	
	for (int i = 0; i < n; i++)
	{
		for(int i = minRand; i<=maxRand; i++)
		cout << i << tab;
	}
	cout << endl;
}
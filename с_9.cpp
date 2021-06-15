#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;

const int SIZE = 5;

void rando(int ar[SIZE][SIZE]);
int max(int ar[SIZE][SIZE]);
int min(int ar[SIZE][SIZE]);

int main()
{
	int d_array[SIZE][SIZE] = {};

	rando(d_array);
	max(d_array);
	min(d_array);
}

void rando(int ar[SIZE][SIZE])
{
	cout << "array:";
	for (int i = 0; i < SIZE; i++)
	{
		cout << "\n";
		for (int j = 0; j < SIZE; j++)
		{
			ar[i][j] = 30 + rand() % 30;
			cout << ar[i][j] << " ";
		}
	}
}

int max(int ar[SIZE][SIZE])
{
	int mx = 29;
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			if (ar[i][j] > mx)
				mx = ar[i][j];
		}
	}
	cout << "\n\nmax:\n"<<mx<<"\n";
	return mx;
}

int min(int ar[SIZE][SIZE])
{
	int mn = 61;
	for (int i = 0; i < SIZE; i++)
	{
		for (int j = 0; j < SIZE; j++)
		{
			if (ar[i][j] < mn)
				mn = ar[i][j];
		}
	}
	cout << "\nmin:\n"<<mn<<"\n";
	return mn;
}
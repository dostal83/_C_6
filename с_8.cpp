#include <iostream>
#include <stdlib.h>
#include <ctime>
using namespace std;

void func(int array[], int size);

int main()
{
	int size_o, size_t;
	cout << "print two sizes of arrays\n";
	cin >> size_o >> size_t;

	int *array_o = new int[size_o]; 
	int *array_t = new int[size_t];

	func(array_o, size_o);
	func(array_t, size_t);
}

void func(int array[], int size)
{
	for (int i = 0; i < size; i++)
	{
		array[i] = rand() % 100;
		cout << array[i] << " ";
	}
	cout << "\n\n";
}
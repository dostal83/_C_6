#include <iostream>
using namespace std;

int currentV = 0;

void Value(int v = 0);

int main()
{
	cout << "Entrer how many times you want to print func: ";
	int num;
	cin >> num;

	for (int i = 1; i <= num; i++)
	{
		cout << i << " time(s)\n";
		Value();
	}
}

void Value(int v)
{
	cout << "Enter new value: ";
	cin >> v;
	cout << "old value: " << currentV << "\n\n";
	currentV = v;
}
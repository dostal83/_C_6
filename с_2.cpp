#include <iostream>
using namespace std;

int num = 0;

void day();

int integ(int n);

int main()
{
	int op;
	cout << "Enter how many times you want to output func: ";
	
	cin >> op;
	integ(op);
}

void day()
{
	num++;

	if (num == 1)
		cout << "Good morning!\n";
	if (num == 2)
		cout << "Good afternoon!\n";
	if (num == 3)
		cout << "Good evening!\n";

	if (num == 3)
		num = 0;
}

int integ(int n)
{
	for (int i = 1; i <= n; i++)
		day();
	return n;
}
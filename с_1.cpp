#include <iostream>
using namespace std;

int integ(int n);

int main()
{
	int num;

	cout << "Enter how many times you want to output func: ";
	cin >> num;

	integ(num);
}

int integ(int n)
{
	for (int i = 1; i <= n; i++)
		cout << "you output func " << i << " time(s)\n";
	return n;
}
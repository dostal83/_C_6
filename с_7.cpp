#include <iostream>
using namespace std;

int n = -1;
int memory[3] = { 0,0,0 };

int sum_th(int s);

int main()
{
	int arg, k;

	cout << "how many times to try func:\n";
	cin >> k;
	cout << "\n";

	for (int i=0; i < k; i++)
	{
		cin >> arg;
		
		sum_th(arg);
	}
}

int sum_th(int s)
{
	n++;
	if (n % 3 == 0)
		n = 0;
	else if (n % 3 == 1)
		n = 1;
	else if (n % 3 == 2)
		n = 2;

	memory[n] = s;

	cout << "\nyour last 3 num\n";
	for (int i = 0; i <3; i++)
		cout << memory[i]<<" ";

	cout << "\nsum last 3 num";
	int sum = memory[0] + memory[1] + memory[2];
	cout << "\n" << sum << "\n\n";

	return(sum);
}
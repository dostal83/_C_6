#include <iostream>
using namespace std;

int n = 0;
float num, num_1;

float aver();

int main()
{
	cout << aver();
	cout << aver();
	cout << aver();
}

float aver()
{
	cout << "\nWrite num to find average \n\n";
	cin >> num;
	n++;

	if (n == 1)
	{
		num_1 = num;
		return num;
	}

	else
	{
		float sum;
		sum = num + num_1;
		num_1 = sum;

		float avg;
		avg = sum / n;

		return avg;
	}
}
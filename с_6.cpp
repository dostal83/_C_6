#include <iostream>
#include <vector>
using namespace std;

vector <int> list_1;
vector <int> list_2;
vector <int> list_3 = { 1 };

void bias();
void end_bias();

int main()
{
	int k;
	cout << "How many times try func?\n";
	cin >> k;
	cout << "\n\n";

	for (int i = 0; k > 0; i++)
	{
		k--;
		bias();
		cout << "\n\n";
	}

	cout << "offset list:\n\n";
	end_bias();
}

void bias()
{
	int num;
	cout << "print num: \n\n";
	cin >> num;

	list_1.push_back(num);
	list_2.push_back(num + 1);

	cout << "your list:\n";
	for (int i = 0; i < list_1.size(); i++)
	{
		cout << list_1[i] << " ";
	}
}

void end_bias()
{
	list_3.insert(list_3.end(), list_2.begin(), list_2.end());
	list_3.pop_back();

	for (int i = 0; i < list_3.size(); i++)
	{
		cout << list_3[i] << " ";
	}
}
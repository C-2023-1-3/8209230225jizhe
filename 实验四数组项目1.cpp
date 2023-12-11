#include<iostream>
using namespace std;
int main()
{
	int a[10];
	cout << "please input ten numbers:";
	for (int i = 0; i < 10; i++)
	{
		cin >> a[i];
	}
	cout << a[0] << '\t';
	for (int i = 1; i < 10; i++)
	{
		for (int p = 0; p < i; p++)
		{
			if (a[p] != a[i])
			{
				if (p == i - 1)
				{
					cout << a[i] << '\t';
				}
			}
			else
			{
				break;
			}
		}
	}
	return 0;
}

#include<iostream>
using namespace std;
void sort(int n, double m[])
{
	bool changed = true;
	int a;
	do
	{
		changed = false;
		for (int j = 0; j < n - 1; j++)
		{
			if (m[j] > m[j + 1])
			{
				a = m[j + 1];
				m[j + 1] = m[j];
				m[j] = a;
				changed = true;
			}
		}
	} while (changed == true);

}
int main()
{
	double a[10]{};
	int i;
	cout << "please input ten numbers:" << endl;
	for (i = 0; i < 10; i++)
	{
		cin >> a[i];
	}
	sort(10, a);
	for (i = 0; i < 10; i++)
	{
		cout << a[i] << '\t';
	}
	return 0;
}

#include<iostream>
using namespace std;
int main()
{
	int a, b, c, C;
	cout << "please input three numbers:";
	cin >> a >> b >> c;
	if (a + b > c && a + c > b && b + c > a)
	{
		C = a + b + c;
		cout << "the circumference of the triangle is:" << C << endl;
		if (a == b || a == c || b == c)
		{
			cout << "this is an isosceles triangle." << endl;
		}
	}
	else
	{
		cout << "error" << endl;
	}
	return 0;
}


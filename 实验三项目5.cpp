#include<iostream>
using namespace std;
int fun(int n)
{
	int m;
	if (n == 1)
	{
		return 1;
	}
	else
	{
		m = (fun(n - 1) + 1) * 2;
	}
	return m;
}
int main()
{
	int a;
	cout << "猴子吃的天数";
	cin >> a;
	cout <<"猴子一共摘得桃子数" <<fun(a) << endl;
	return 0;
}

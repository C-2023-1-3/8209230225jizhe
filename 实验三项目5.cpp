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
	cout << "���ӳԵ�����";
	cin >> a;
	cout <<"����һ��ժ��������" <<fun(a) << endl;
	return 0;
}

#include<iostream>
using namespace std;
int n;
void fun(int p[]) {
	
	for (int i = 0;i < n - 1;i++)
	{
		for (int j = 0;j < n - i - 1;j++)
		{

			if (p[j] > p[j + 1])
			{
				int t;
				t = p[j + 1];
				p[j + 1] = p[j];
				p[j] = t;

			}
		}
	}
}
int main()
{
	int* p;
	int a;
	
	cout << "please enter the size of the array" << endl;
	cin >> n;
	p = new int [n];
	cout << "please enter the list" << endl;
	for (int i = 0;i < n;i++)
	{
		
		cin >> p[i];
		
	}
	cout << "��ѡ����Ҫ�鿴�������е���Ŀ��";
	cin >> a;
	cout << p[a - 1] << endl;
	cout << "��������������Ϊ��";
	fun(p);
	
	for (int i = 0;i < n;i++)
	{
		cout << *(p+i)<<' ';
	}
	delete[]p;
	return 0;
}
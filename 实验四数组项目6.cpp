#include<iostream>
using namespace std;
void count(const char s[], int counts[])
{
	int len= strlen( s);
	for (int i = 0;i < 26;i++)
	{
		counts[i] = 0;
	}
	for (int j = 0;j < len;j++)

	{
		if ((s[j] <= 90) && (s[j] >= 65))

		{
			counts[s[j] - 65]++;


		}
		else if ((s[j] <= 122) && (s[j] >= 97))
		{
			counts[s[j] - 97]++;
		}
	}
			for ( int j = 0;j < 26;j++)
			{
				if (counts[j] != 0)
				{
					int m = j + 97;
					cout << char(m) << ":" << counts[j] << "times" << endl;
				}
			}
			
		

			
	
}
int main()
{ const int a = 999;
	char arr[a];
	cout << "Enter a string :" << endl;
	cin.getline(arr, a);
	int counts[26];
	count (arr ,counts);
	

	
	return 0;
}
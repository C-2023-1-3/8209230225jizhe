#include<iostream>
using namespace std;
int parseHex(const char* const hexString)
{
	int sum=0;int n = 0,m=0;
	int l=strlen(hexString);
	for (int i = 0;i < l;i++)
	{
		
		if (hexString[i] >= 65 && hexString[i] <= 70) {
			n= (hexString[i] - 55) * pow (16 , l - i - 1);
		}
		else {
			n = (hexString[i]-48) * pow(16 ,l - i -1);
		}
		m = sum;
		sum = m + n;
	}
	return sum;

}
	
int main() 
{const int size = 999;
	char s1[size];
	cin.getline(s1, size);
	cout << parseHex(s1) << endl;

	
	return 0;
}
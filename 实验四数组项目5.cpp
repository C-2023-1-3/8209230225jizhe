#include<iostream>
using namespace std;
int indexOf(const char s1[], const char s2[]) {
	int a, b;
	a = strlen(s1);
	b = strlen(s2);
	if (a > b)
	{
		return -1;
	}
	for (int i = 0; i <= b - a; i++)
	{
		for (int q = 0; q < a; q++)
		{
			if (q == a - 1 && s1[q] == s2[i + q]) {
				return i;
			}
			if (s1[q] != s2[i + q])
			{
				break;
			}
		}
	}
	return -1;

}

int main()
{
	const int size = 999;
	char s3 [size], s4[size];
	cout << "Enter the first string: ";
	cin .getline(s3,size);
	cout << " Enter the second string :";
	cin.getline(s4, size);
	int a=indexOf(s3, s4);
	cout << "indexOf(¡°" << s3 << "¡±,¡°" << s4 << "¡±)is" <<a;


	return 0;
}
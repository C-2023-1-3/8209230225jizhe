#include <iostream>
using namespace std;

int main()
{
	bool arr[101]{};
	for (int i = 1;i <=100;i++) 
	{
		for (int j = 1;j<=100;j++) {
			if (j%i == 0) {
				if (arr[j] == 0) {
					arr[j] = 1;
				}
				else {
					arr[j] = 0;
				}
			}
		}
	}

	for (int t = 0;t <=100;t++)
	{
		if (arr[t] ==1) {
			cout << t<< ' ';
		}
	}
	return 0;
}
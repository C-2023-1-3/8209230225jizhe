#include<iostream>
using namespace std;
int main() {
	double a,b,sum1=0,sum2;
	int c = 0;
	a = 0.8;
	b = 2;
	for (;b <= 100;b=b*2) {
		sum2 = sum1;
		sum1 = a * b + sum2;
		c++;
	}
	cout << sum1/c << endl;
	
	return 0;
}
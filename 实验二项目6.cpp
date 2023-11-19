
	#include<iostream>
using namespace std;

int main() {
	int a, b;
	cin >> a >> b;
	for (int i = a;i >=1;i--)
	{
		if (a % i == 0) {
			
           
			if (b % i ==0) 
			{
				cout << "最大公因数为"<<i << endl;
				break;
		    }	
		}
	}
	for (int j = a;;j++) {
		if (j % a == 0) {
			if (j % b == 0) {
				cout << "最小公倍数为" << j << endl;
				break;
			}
		}
	}


return 0;
}
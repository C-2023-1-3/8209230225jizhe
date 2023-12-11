#include <iostream>
using namespace std;
bool is_prime(int num) {
	for (int i = num-1;i >0;i--) {
		if (num % i == 0) {
			if (i != 1) {
				return false;
				break;
			}
			if (i == 1) {
				return true;

			}
		}
		
	}
	
}
int main() {
	int c = 1;

	for (int j = 1;j <= 200;j++) {
		
		
			bool a = is_prime(j);
			if (a == 1) {
				if (c % 10 == 0)
				{
					cout << ' ' << j<< endl;
				}
				else
				{
					cout << ' ' << j;
				}
				c++;
			}
			
		
	}
	return 0;
}
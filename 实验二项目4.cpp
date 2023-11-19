#include <iostream>
using namespace std;
int main() {
	int a, b;char c;
	cin >> a >>c>> b;
	
	switch (c) {
	case'+':cout << a + b << endl;break;
	case'-':cout << a - b << endl;break;
	case'*':cout << a * b << endl;break;
	case'/': if (b != 0) { cout << a / b << endl; break;
	}
		   else { cout << "error" << endl;break;
	}
	case'%': cout << a % b << endl;break;
	}
	return 0;
}
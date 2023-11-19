#include <iostream>
using namespace std;
const float pi = 3.1415;
int main() {
	float r,h;
	cout << "please input r:";
	cin >> r;
	cout << "please input h:";
	cin >> h;
	cout << "V=" << (pi * r * r * h) / 3 << endl;
	return 0;
}
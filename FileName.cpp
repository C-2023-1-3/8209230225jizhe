#include<iostream>
#include"mytriangle.h"
using namespace std;
int main() {
	double side1, side2, side3;
	cout << "�����������ε����߳�:" << endl;
	cin >> side1 >> side2 >> side3;


	bool a = is_valid(side1, side2, side3);
	if (a == 1) {
		cout << "���Ϊ" << _area(side1, side2, side3) << endl;
	}
	else {
		cout << "fault" << endl;
	}
	return 0;
}
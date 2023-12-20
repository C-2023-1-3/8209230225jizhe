#include<iostream>
#include"mytriangle.h"
using namespace std;
int main() {
	double side1, side2, side3;
	cout << "请输入三角形的三边长:" << endl;
	cin >> side1 >> side2 >> side3;


	bool a = is_valid(side1, side2, side3);
	if (a == 1) {
		cout << "面积为" << _area(side1, side2, side3) << endl;
	}
	else {
		cout << "fault" << endl;
	}
	return 0;
}
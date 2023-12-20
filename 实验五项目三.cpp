#include<iostream>
using namespace std;
class Cube {
public:
	int length;
	int width;
	int height;
	void set_length() {
		;
		cin >> length;
	}
	void set_width() {
		
		cin >> width;
	}
	void set_height() {
		
		cin >> height;

	}
		
	
	int dispaly() {
		int v;
		v = length * width * height;
		return v;
	}
};
int main() {
	Cube c1;Cube c2;Cube c3;
	cout << "please enter three cubes'length" << endl;
	c1.set_length();c2.set_length();c3.set_length();
	cout << "please enter three cubes' width:" << endl;
	c1.set_width();c2.set_width();c3.set_width();
	cout << "please enter three cubes' height:" << endl;
	c1.set_height();c2.set_height();c3.set_height();
	cout << "volume1:"<<c1.dispaly() << endl;
	cout << "volume2:" << c2.dispaly() << endl;
	cout << "volume3:" << c3.dispaly() << endl;
	
	
	
	return 0;
}
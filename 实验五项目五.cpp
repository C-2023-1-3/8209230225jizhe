#include<iostream>
using namespace std;
class Point
{
private:
	int x;
	int y;
public:
	Point(int X, int Y)
	{
		x = X;
		y = Y;
		cout << "(" << x << "," << y << ")" << endl;

	}
	void setPoint(int i, int j)
	{
		
		x += i;
		y += j;
		

	}
	
void display() {
	cout << "(" << x<< "," << y<< ")" << endl;
}
};

int main()
{
	Point p1(60,80);
	int a, b;
	cin >> a >> b;
	p1.setPoint(a, b);
	p1.display();


	return 0;
}

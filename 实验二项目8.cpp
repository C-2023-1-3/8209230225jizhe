#include<iostream>
#include <iomanip>
using namespace std;
 int main() 
 {
	 double a;
	 cout << "please input a number:"<<endl;
	 cin >> a;
	 double i = 0, j = 1;
	 if(a>=0){
		 for (;i-j>1e-10||j-i>1e-10;)

		 {
			 i = j;
			 j = (i + a / i) / 2;


		 }
		 cout << "其平方根为" << setprecision(11) <<j <<endl;
	 }
	 else {
		 cout << "error" << endl;
	 }
	return 0;
}
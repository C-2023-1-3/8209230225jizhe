#include <iostream>
using namespace std;
int max(int &a, int &b ){
	int i = a;
	for (;i > 1;i--) {
		if (a % i == 0) {
			if (b % i == 0) {
				break;
				
			}
			
		}
		
	}
	return i;
}
int min(int& a, int& b) {
	int i = a;
	for (;;i++) {
		if(i%a==0)
			if (i % b == 0) {
				break;
			}
	}
	return i;
}
int main() {
	int m, n;
	cout << "������������Ȼ��" << endl;
	cin >> m >> n ;
	

	cout << "�������Ϊ"<<max(m, n) << endl;
	cout << "��С������Ϊ" << min(m, n) << endl;
	return 0;
}
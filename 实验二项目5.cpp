#include<iostream>
#include<string>
using namespace std;
int main() {
	string input;
	cout << "������һ���ַ���";
		std::getline(std::cin, input);
		int lettercount = 0;
		int spacecount = 0;
		int digitcount = 0;
		int othercount = 0;
		for (char c : input) {
			if (isalpha(c)) {
				lettercount++;

			}
			else if (isspace(c)) {
				spacecount++;

			}
			else if (isdigit(c)) {
				digitcount++;

			}
			else  {
				othercount++;

			}

		}
		cout << "��ĸ������" << lettercount << endl;
		cout << "�ո������" << spacecount << endl;
		cout << "���ָ���" << digitcount << endl;
		cout << "�����ַ�������" << othercount << endl;
	

	return 0;
}
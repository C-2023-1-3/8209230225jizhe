#include<iostream>
#include<string>
using namespace std;
int main() {
	string input;
	cout << "请输入一行字符：";
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
		cout << "字母个数：" << lettercount << endl;
		cout << "空格个数：" << spacecount << endl;
		cout << "数字个数" << digitcount << endl;
		cout << "其它字符个数：" << othercount << endl;
	

	return 0;
}
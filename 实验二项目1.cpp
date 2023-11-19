#include <iostream>
#include <cctype>
using namespace std;
int main() {
	char letter;
	cin >> letter;
	if (islower(letter)) {
		char a = std::toupper(letter);
		cout << a << endl;
	}
	else {
		int b = static_cast<int>(letter);
		cout << b<< endl;
	}

	return 0;
}
#include <iostream>
#include <string>
using namespace std;

void convertToASCIIandPlusTwo(string letter) {
	for (int i = 0; i < letter.length(); i++) {
		

		if (letter.at(i) == 'y') {
			letter.at(i) = 95;
		}
		if (letter.at(i) == 'z') {
			letter.at(i) = 96;
		}

		char x = letter.at(i)+2;

		cout << x;
	}
}

int main() {
	
	string text;

	getline(cin, text);

	convertToASCIIandPlusTwo(text);

	return 0;
}
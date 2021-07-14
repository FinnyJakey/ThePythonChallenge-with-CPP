#include <iostream>

using namespace std;

int main() {

	
	long long sum = 2;
	/*
	long long int sum = 2;
	signed long long sum = 2;
	signed long long int sum = 2;
	같은 의미

	unsigned long long sum = 2;
	unsigned long long int sum = 2;
	같은 의미
	*/

	for (int i = 0; i < 37; i++) {
		sum *= 2;
	}

	cout << sum << endl;

	return 0;
}
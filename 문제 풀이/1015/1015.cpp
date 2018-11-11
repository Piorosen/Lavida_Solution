#include <iostream>
using namespace std;

int main() {
	int testCase = 0;

	cin >> testCase;
	for (int q = 0; q < testCase; q++) {
		int input = 0;
		int count = 0;
		cin >> input;

		for (; input != 1;count++) {
			if (input % 2 == 0) {
				input /= 2;
			}
			else {
				input = (input * 3) + 1;
			}
		}
		cout << count << endl;
	}
}
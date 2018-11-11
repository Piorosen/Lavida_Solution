#include <iostream>
#include <math.h>
#include <string.h>
#include <string>

using namespace std;

int main() {
	int testCase;
	cin >> testCase;

	for (int q = 0; q < testCase; q++) {
		int z[101] = { 0, }, x[101] = { 0, };
		string a, b;
		cin >> a >> b;

		for (int i = 0; i < a.size(); i++) {
			z[i] = (a[i] - 64);
		}
		for (int i = 0; i < b.size(); i++) {
			x[i] = (b[i] - 64);
		}

		int sum = 0;
		for (int i = 0; i < 101; i++) {
			sum += abs(z[i] - x[i]) * abs(z[i] - x[i]);
		}

		int upnum = a.size() > b.size() ? a.size() : b.size();

		cout << sum / upnum << endl;

	}
}
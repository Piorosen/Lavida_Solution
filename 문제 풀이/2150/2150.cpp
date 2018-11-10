#define _CRT_SECURE_NO_WARNINGS

#include <iostream> 
#include <string> 
#include <cstdlib>
#include <vector>
#include <algorithm>
#include <functional>
#include <math.h>

using namespace std;

int main()
{
	int testCase;
	cin >> testCase;

	for (int i = 0; i < testCase; i++) {
		int x, y;
		cin >> x >> y;
		string str;
		cin >> str;
		for (int q = 0; q < str.length(); q++) {
			switch (str[q]) {
			case '1':
				y++;
				break;
			case '2':
				x++;
				y++;
				break;
			case '3':
				x++;
				break;
			case '4':
				x++;
				y--;
				break;
			case '5':
				y--;
				break;
			case '6':
				x--;
				y--;
				break;
			case '7':
				x--;
				break;
			case '8':
				x--;
				y++;
				break;

			}
		}
		cout << x << " " << y << endl;

	}
}
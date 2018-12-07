#include <algorithm>
#include <iostream>
#include <vector>
#include <queue>
#include <string>

using namespace std;

typedef struct Word {
	Word(string s, int m) : word(s), money(m) {
	}
	string word;
	int money;
};

int main(void)
{
	int TestCase;
	int SentenceCase;
	cin >> TestCase >> SentenceCase;
	vector<Word> List;

	for (int i = 0; i < TestCase; i++) {
		string s;
		int money;
		cin >> s >> money;
		List.push_back(Word(s, money));
	}

	for (int i = 0; i < SentenceCase; i++) {
		int Money = 0;
		for (;;) {
			string s;
			cin >> s;
			if (s == ".") {
				break;
			}

			for (auto d : List) {
				if (d.word == s) {
					Money += d.money;
				}
			}
		}
		cout << Money << endl;
	}
}
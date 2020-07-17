#include <iostream>
#include <string>
using namespace std;

int main() {
	int N;
	cin >> N;
	cin.ignore();
	for (int i = 0; i < N; i++) {
		int score = 0;
		int cnt = 0;
		string str;
		getline(cin, str);
		for (int i = 0; i < str.length(); i++) {
			if (str[i] == 'O') {
				cnt++;
			}
			else if (str[i] == 'X') {
				cnt = 0;
			}
			score += cnt;
		}
		cout << score << endl;
	}
}
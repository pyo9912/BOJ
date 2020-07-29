#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
	int n;
	cin >> n;
	for (int i = 0; i < n; i++) {
		int r;
		string str;
		cin >> r >> str;
		for (int idx = 0; idx < str.length(); idx++) {
			for (int i = 0; i < r; i++) {
				cout << str[idx];
			}
		}
		cout << endl;
	}
	return 0;
}
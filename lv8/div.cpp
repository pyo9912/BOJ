#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
	int X;
	cin >> X;
	int idx = 1;
	int u = 1, d = 1;
	int sum = u + d;
	while (1) {
		if (idx == X) break;
		if (sum % 2 == 0) {
			if (u == 1) {
				sum++;
				d++;
				idx++;
				continue;
			}
			u--;
			d++;
		}
		else {
			if (d == 1) {
				sum++;
				u++;
				idx++;
				continue;
			}
			u++;
			d--;
		}
		idx++;
	}
	cout << u << "/" << d << endl;
	return 0;
}
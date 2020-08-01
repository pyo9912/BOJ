#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
	int A, B, C;
	cin >> A >> B >> C;
	int n = 0;
	if (C <= B) {
		cout << -1;
	}
	else {
		cout << A / (C - B) + 1;
	}
	return 0;
}
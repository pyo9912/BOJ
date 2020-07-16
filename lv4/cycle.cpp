#define _CRT_SECURE_NO_WARNINGS
#include <iostream>
using namespace std;

int main() {
	int N, len = 0;
	cin >> N;
	int _N = N;
	while (true) {
		int N1 = N / 10;
		int N2 = N % 10;
		int sum = N1 + N2;
		N = (N2 * 10) + (sum % 10);
		len++;
		if (N == _N) break;
	}
	cout << len;
	return 0;
}
#include <iostream>
using namespace std;

bool isSeq(int n) {
	if (n < 100) {
		return true;
	}
	else {
		int a, b, c;
		c = n % 10;
		n /= 10;
		b = n % 10;
		a = n / 10;
		if (a + c == 2 * b) return true;
		return false;
	}
}

int main() {
	int cnt = 0;
	int num;
	cin >> num;
	for (int i = 1; i <= num; i++) {
		if (isSeq(i) == true) cnt++;
	}
	cout << cnt;
}
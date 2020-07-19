#include <iostream>
using namespace std;

long d(int n) {
	int sum = n;
	while (n / 10) {
		sum += n % 10;
		n /= 10;
	}
	sum += n;
	return sum;
}

int main() {
	int arr[10001] = { 0, };
	for (int i = 0; i <= 10000; i++) {
		if (d(i) <= 10000) {
			arr[d(i)] = -1;
		}
	}
	for (int i = 1; i <= 10000; i++) {
		if (arr[i] == 0) {
			cout << i << endl;
		}
	}
	return 0;
}


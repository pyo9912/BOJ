#include <iostream>
using namespace std;

int main() {
	int A, B, C, mod;
	cin >> A >> B >> C;
	int N = A * B * C;
	int cnt[10] = { 0, };
	while (N / 10) {
		mod = N % 10;
		cnt[mod]++;
		N /= 10;
	}
	cnt[N]++;
	for (int i = 0; i < 10; i++) {
		cout << cnt[i] << endl;
	}
	return 0;
}
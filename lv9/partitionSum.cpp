#include <iostream>
using namespace std;

int getPartition(int i) {
	int res = i;
	if (i / 10 == 0) return res;
	while (i / 10 > 0) {
		res += i % 10;
		i /= 10;
	}
	res += i;
	return res;
}

int main() {
	int N;
	int idx = 1;
	cin >> N;
	for (idx = 1; idx < N; idx++) {
		int P = getPartition(idx);
		if (P == N) break;
	}
	if (idx == N) cout << 0 << endl;
	else cout << idx << endl;
}
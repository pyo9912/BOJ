#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
	int N;
	cin >> N;
	
	int cnt = 1;
	int idx = 1;
	int tmp = 1;

	while (true) {
		if (idx >= N) {
			break;
		}
		tmp = 6 * (cnt++);
		idx += tmp;
	}
	cout << cnt;
	return 0;
}
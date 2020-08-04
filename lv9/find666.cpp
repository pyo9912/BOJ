#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
	int N;
	cin >> N;
	int cnt = 0;
	int num = 0;
	while (cnt != N) {
		int tmp = ++num;
		bool flag = false;
		while (tmp) {
			if (tmp % 1000 == 666) {
				flag = true;
				break;
			}
			tmp /= 10;
		}
		if (flag == true) cnt++;
		num;
	}
	cout << num;
	return 0;
}
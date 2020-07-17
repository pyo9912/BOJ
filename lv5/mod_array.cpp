#include <iostream>
using namespace std;

int main() {
	int cnt = 0;
	int arr[10];
	for (int i = 0; i < 10; i++) {
		cin >> arr[i];
		arr[i] %= 42;
	}
	for (int i = 0; i < 9; i++) {
		if (arr[i] != -1) {
			for (int j = i + 1; j < 10; j++) {
				if (arr[i] == arr[j]) {
					arr[j] = -1;
					cnt++;
				}
			}
		}
	}
	cout << 10 - cnt;
}
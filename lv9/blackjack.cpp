#include <iostream>
using namespace std;

int main() {
	int N, X;
	cin >> N >> X;
	int* arr = new int[N];
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	int sum = 0;
	for (int i = 0; i < N - 2; i++) {
		for (int j = i + 1; j < N - 1; j++) {
			for (int k = j + 1; k < N; k++) {
				if (arr[i] + arr[j] + arr[k] <= X) {
					if (arr[i] + arr[j] + arr[k] > sum) {
						sum = arr[i] + arr[j] + arr[k];
					}
				}
			}
		}
	}
	cout << sum << endl;
}

#include <iostream>
using namespace std;

int main() {
	int N, min, max;
	cin >> N;
	int* arr = new int[N];
	for (int i = 0; i < N; i++) {
		cin >> arr[i];
	}
	min = max = arr[0];
	for (int i = 0; i < N - 1; i++) {
		if (min > arr[i + 1]) min = arr[i + 1];
		if (max < arr[i + 1]) max = arr[i + 1];
	}
	cout << min << " " << max;
	delete[] arr;
	return 0;
}
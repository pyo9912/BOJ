#include <iostream>
#include <stdio.h>
#include <math.h>
using namespace std;

int main() {
	int C;
	cin >> C;
	for (int i = 0; i < C; i++) {
		int cnt = 0;
		int size = 0;
		int sum = 0;
		cin >> size;
		if (size == 0) break;
		int* score = new int[size];
		for (int i = 0; i < size; i++) {
			cin >> score[i];
			sum += score[i];
		}
		double avg = (double)sum / size;
		for (int i = 0; i < size; i++) {
			if (score[i] > avg) {
				cnt++;
			}
		}
		double percent = ((double)cnt / size) * 100;
		printf("%.3f%%\n", percent);
	}
	return 0;
}
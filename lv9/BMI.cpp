#include <iostream>
#include <stdio.h>
using namespace std;

typedef struct bmi {
	int Rank = 1;
	int Weight = 0;
	int Height = 0;
}BMI;

int main() {
	int N;
	cin >> N;
	BMI* bmi = new BMI[N];
	for (int i = 0; i < N; i++) {
		cin >> bmi[i].Weight >> bmi[i].Height;
	}
	for (int i = 0; i < N - 1; i++) {
		for (int j = i + 1; j < N; j++) {
			if (bmi[i].Weight > bmi[j].Weight && bmi[i].Height > bmi[j].Height) {
				bmi[j].Rank++;
			}
			else if (bmi[i].Weight < bmi[j].Weight && bmi[i].Height < bmi[j].Height) {
				bmi[i].Rank++;
			}
		}
	}
	for (int i = 0; i < N; i++) {
		cout << bmi[i].Rank << " ";
	}
	return 0;
}
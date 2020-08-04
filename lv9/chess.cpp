#include <iostream>
#include <stdio.h>
#define min(a, b) (a < b ? a : b)
using namespace std;

int main() {
	int N, M;
	cin >> N >> M;
	char** board = new char* [N];
	for (int i = 0; i < N; i++) {
		board[i] = new char[M];
	}
	for (int i = 0; i < N; i++) {
		for (int j = 0; j < M; j++) {
			cin >> board[i][j];
		}
	}
	int minNum = N * M;
	int cnt1;
	int cnt2;
	for (int I = 0; I < N - 7; I++) {
		for (int J = 0; J < M - 7; J++) {
			cnt1 = 0;
			cnt2 = 0;
			for (int i = I; i < I + 8; i++) {
				for (int j = J; j < J + 8; j++) {
					if ((i + j) % 2 == 0 && board[i][j] == 'B') cnt1++;
					else if ((i + j) % 2 == 1 && board[i][j] == 'W') cnt1++;
					else if ((i + j) % 2 == 0 && board[i][j] == 'W') cnt2++;
					else cnt2++;
				}
			}
			minNum = min(minNum, cnt1);
			minNum = min(minNum, cnt2);
		}
	}
	
	cout << minNum << endl;
	return 0;
}
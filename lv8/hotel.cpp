#include <iostream>
using namespace std;

int main() {
	int T, H, W, N;
	int room;
	cin >> T;
	for (int i = 0; i < T; i++) {
		cin >> H >> W >> N;
		int h = 1;
		int w = 1;
		if (N > H * W) break;
		while (N > 1) {
			if (h == H) {
				h = 1;
				w++;
			}
			else {
				h++;
			}
			N--;
		}
		cout << h * 100 + w << endl;
	}
}
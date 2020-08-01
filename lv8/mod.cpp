#include <iostream>
#include <stdio.h>
using namespace std;

int main() {
	int N;
	cin >> N;
	int mod = N % 5;
	int res = -1;
	switch (mod)
	{
	case 0:
		if (N > 0) res = N / 5;
		break;
	case 1:
		if (N >= 6) res = (N - 6) / 5 + 2;
		break;
	case 2:
		if (N >= 12) res = (N - 12) / 5 + 4;
		break;
	case 3:
		if (N >= 3) res = (N - 3) / 5 + 1;
		break;
 	case 4:
		if (N >= 9) res = (N - 9) / 5 + 3;
		break;
	default:
		res = -1;
		break;
	}
	cout << res;
	return 0;
}
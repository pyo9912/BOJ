#include <iostream>
using namespace std;

int main() {
	int hour, min;
	int setHour, setMin;
	cin >> hour >> min;
	if (min >= 45) {
		setHour = hour;
		setMin = min - 45;
	}
	else {
		if (hour == 0) {
			setHour = 23;
		}
		else {
			setHour = hour - 1;
		}
		setMin = 60 - (45 - min);
	}
	cout << setHour << " " << setMin;
}
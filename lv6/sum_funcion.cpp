#include <vector>
using namespace std;

long sum(std::vector<int>& a) {
	long sum = 0;
	vector<int>::iterator iter;
	for (iter = a.begin(); iter != a.end(); iter++) {
		sum += *iter;
	}
	return sum;
}

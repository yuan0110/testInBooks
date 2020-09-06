#include <iostream>
using namespace std;
#include <cmath>
int main() {
	int m, k,count;
	cin >> m;
	count = 0;
	for (int i = 2; i <= m; ++i) {
		k = int(sqrt(double(i)));
		int temp = 2;
		while (i % temp != 0 && temp <= k) {
			temp++;
		}
		if (temp > k) {
			count++;
			cout << i << '\t';
			if (count % 5 == 0) {
				cout << '\n';
			}
		}
	}
}
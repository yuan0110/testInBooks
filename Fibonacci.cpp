#include <iostream>
using namespace std;
#include <cmath>
int main() {
	int n, i, a0, a1, a2;
	cin >> n;
	a0 = 0;
	a1 = 1;
	cout << a0 << '\t' << a1 << '\t';
	for (i = 3; i <= n; ++i) {
		a2 = a0 + a1;
		cout << a2 << '\t';
		a0 = a1;
		a1 = a2;
		if (i % 10 == 0)
			cout << '\n';
	}
}
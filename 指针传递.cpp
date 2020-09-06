#include <iostream>
using namespace std;
int func(const int* const p) {
	int a = 10;
	a += *p;
	return a;
}
int main() {
	const int P = 10;
	cout << func(&P) << endl;
}
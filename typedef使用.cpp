#include <iostream>
using namespace std;
#include <cmath>
typedef double ftype(double);
double callFun(ftype* fp, double, double);
int main() {
	double r;
	cin >> r;
	cout << callFun(sin, 0, r) << '\n';
	cout << callFun(cos, 0, r) << '\n';
}
double callFun(ftype* fp, double l, double r) {
	double s, d = 0.0;
	for (s = l; s <= r; s += 0.1) {
		d += fp(s);
	}
	return d;
}
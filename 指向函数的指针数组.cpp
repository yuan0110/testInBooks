#include <iostream>
using namespace std;
#include "func.h"
int main() {
	int i;
	double x = 1.23;
	double (*pfun[4])(double);
	pfun[0] = Square_Girth;
	pfun[1] = Square_Area;
	pfun[2] = Round_Girth;
	pfun[3] = Round_Area;
	for (i = 0; i < 4; ++i) {
		cout << (*pfun[i])(x) << endl;
	}
}
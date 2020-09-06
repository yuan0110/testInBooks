#include <iostream>
using namespace std;
#include <cstring>
#include <cstdio>
#include <string>
int main() {
	int a[3][4] = { 1,2,33,4,5,6,7,8,9,10,11,12 };
	int* p;
	p = a[0];
	for (int i = 0; i < 12; ++i) {
		cout << (p + i) << endl;
	}
	int(*pfun)[4];
	for (int i = 0; i < 3; ++i) {
		pfun = a + i;
		cout << a[i] << pfun << endl;
		for (int j = 0; j < 4; ++j)
			cout << *(a[i] + j) << *(*pfun+j) << endl;
	}
} 
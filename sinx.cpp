#include <iostream>
using namespace std;
#include <cmath>
int main() {
	long int n = 1;
	double x, term, sum;
	cin >> x;
	term = x;
	sum = x;
	while (abs(term) >= 1e-8) {
		n += 2;
		int temp = n - 1;
		term *= -x * x / temp; //算术溢出 : 使用 4 字节值上的运算符 - ，然后将结果转换到 8 字节值。在调用运算符 - 之前将值强制转换为宽类型可避免溢出(io.2)。
		term /= n;
		sum += term;
	}
	cout << sum << endl;
	cout << sin(x) << endl;
}
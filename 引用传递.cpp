#include <iostream>
using namespace std;
void swap(int &a, int &b) {
	int temp = a;
	a = b;
	b = temp;
}
void func(int& p) {
	cout << &p << endl;
}
int main() {
	int a = 1, b = 2;
	cout << a << b << '\n';
	cout << &a;
	swap(a, b);
	cout << &a;
	cout << a << b << '\n';
	int p = 100;
	cout << &p << endl;
	func(p);
	//func(200); 函数的const引用参数才允许对应的实际参数为常数，非约束的实参必须是对象名 
}

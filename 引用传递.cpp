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
	//func(200); ������const���ò����������Ӧ��ʵ�ʲ���Ϊ��������Լ����ʵ�α����Ƕ����� 
}

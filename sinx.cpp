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
		term *= -x * x / temp; //������� : ʹ�� 4 �ֽ�ֵ�ϵ������ - ��Ȼ�󽫽��ת���� 8 �ֽ�ֵ���ڵ�������� - ֮ǰ��ֵǿ��ת��Ϊ�����Ϳɱ������(io.2)��
		term /= n;
		sum += term;
	}
	cout << sum << endl;
	cout << sin(x) << endl;
}
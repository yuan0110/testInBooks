#include <iostream>
using namespace std;
int main() {
	while (true)
	{
		int n, count = 0;
		int sum = 0;
		while (cin >> n) {
			if (n != 0)
			{
				count++;
				sum += n;
			}
		}
		cout << count << sum << "\n";

	}
}